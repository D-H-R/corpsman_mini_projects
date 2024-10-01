(******************************************************************************)
(*                                                                            *)
(* Author      : Uwe Schächterle (Corpsman)                                   *)
(*                                                                            *)
(* This file is part of PixelEditor                                           *)
(*                                                                            *)
(*  See the file license.md, located under:                                   *)
(*  https://github.com/PascalCorpsman/Software_Licenses/blob/main/license.md  *)
(*  for details about the license.                                            *)
(*                                                                            *)
(*               It is not allowed to change or remove this text from any     *)
(*               source file of the project.                                  *)
(*                                                                            *)
(******************************************************************************)

FElements := Nil;

// This code es extracted from the upixeleditor.MakeCurrent function in order
// to not disturb the read flow of the user, in a typical LCL-Application all
// this content would be defined in the .lfm file

NewButton := TOpenGL_Bevel.Create(Owner);
Newbutton.Left := 3;
Newbutton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'New.bmp', Fuchsia, smClamp);
//Newbutton.SetImage(image);
Newbutton.Transparent := true;
Newbutton.Width := 32;
Newbutton.Height := 32;
NewButton.OnClick := @OnNewButtonClick;
AddElement(NewButton);

OpenButton := TOpenGL_Bevel.Create(Owner);
OpenButton.Left := 3 + 32 + 3;
OpenButton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'New.bmp', Fuchsia, smClamp);
//OpenButton.SetImage(image);
OpenButton.Transparent := true;
OpenButton.Width := 32;
OpenButton.Height := 32;
OpenButton.OnClick := @OnOpenButtonClick;
AddElement(OpenButton);

SaveButton := TOpenGL_Bevel.Create(Owner);
SaveButton.Left := 3 + 32 + 3 + 32 + 3;
SaveButton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'New.bmp', Fuchsia, smClamp);
//SaveButton.SetImage(image);
SaveButton.Transparent := true;
SaveButton.Width := 32;
SaveButton.Height := 32;
SaveButton.OnClick := @OnSaveButtonClick;
AddElement(SaveButton);

SaveAsButton := TOpenGL_Bevel.Create(Owner);
SaveAsButton.Left := 3 + 32 + 3 + 32 + 3 + 32 + 3;
SaveAsButton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'New.bmp', Fuchsia, smClamp);
//SaveAsButton.SetImage(image);
SaveAsButton.Transparent := true;
SaveAsButton.Width := 32;
SaveAsButton.Height := 32;
SaveAsButton.OnClick := @OnSaveAsButtonClick;
AddElement(SaveAsButton);

ExitButton := TOpenGL_Bevel.Create(Owner);
Exitbutton.Left := 143;
Exitbutton.Top := 3;
image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
Exitbutton.SetImage(image);
Exitbutton.Transparent := true;
Exitbutton.Width := 32;
Exitbutton.Height := 32;
ExitButton.OnClick := @OnExitButtonClick;
AddElement(ExitButton);

GridButton := TOpenGL_Bevel.Create(Owner);
GridButton.Left := 213;
GridButton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//GridButton.SetImage(image);
GridButton.Transparent := true;
GridButton.Width := 32;
GridButton.Height := 32;
GridButton.OnClick := @OnGridButtonClick;
AddElement(GridButton);


ZoomOutButton := TOpenGL_Bevel.Create(Owner);
ZoomOutButton.Left := 262;
ZoomOutButton.Top := 10;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//ZoomOutButton.SetImage(image);
ZoomOutButton.Transparent := true;
ZoomOutButton.Width := 16;
ZoomOutButton.Height := 16;
ZoomOutButton.OnClick := @OnZoomOutButtonClick;
AddElement(ZoomOutButton);

// TODO: Es fehlt noch das Zoom InfoLabel

ZoomInButton := TOpenGL_Bevel.Create(Owner);
ZoomInButton.Left := 353;
ZoomInButton.Top := 10;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//ZoomInButton.SetImage(image);
ZoomInButton.Transparent := true;
ZoomInButton.Width := 16;
ZoomInButton.Height := 16;
ZoomInButton.OnClick := @OnZoomInButtonClick;
AddElement(ZoomInButton);

// TODO: Es fehlt noch das algemeine Textinfo feld

UndoButton := TOpenGL_Bevel.Create(Owner);
UndoButton.Left := 605;
UndoButton.Top := 3;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//UndoButton.SetImage(image);
UndoButton.Transparent := true;
UndoButton.Width := 32;
UndoButton.Height := 32;
UndoButton.OnClick := @OnUndoButtonClick;
AddElement(UndoButton);

SelectButton := TOpenGL_Bevel.Create(Owner);
SelectButton.Left := 3;
SelectButton.Top := 41;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//SelectButton.SetImage(image);
SelectButton.Transparent := true;
SelectButton.Width := 32;
SelectButton.Height := 32;
SelectButton.OnClick := @OnSelectButtonClick;
AddElement(SelectButton);

SelectModeButton := TOpenGL_ToggleButton.Create(Owner);
SelectModeButton.Left := 41;
SelectModeButton.Top := 41;
image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'SelModeLowered.bmp', Fuchsia, smClamp);
SelectModeButton.SetImage(image);
image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'SelModeRaised.bmp', Fuchsia, smClamp);
SelectModeButton.SetDownImage(image);
SelectModeButton.Transparent := true;
SelectModeButton.Width := 32;
SelectModeButton.Height := 32;
//SelectModeButton.OnClick := @OnSelectModeButtonClick; -- Braucht es nicht, man kann ja den Style abfragen ;)
AddElement(SelectModeButton);

RotateCounterClockwise90 := TOpenGL_Bevel.Create(Owner);
RotateCounterClockwise90.Left := 3;
RotateCounterClockwise90.Top := 76;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//RotateCounterClockwise90.SetImage(image);
RotateCounterClockwise90.Transparent := true;
RotateCounterClockwise90.Width := 16;
RotateCounterClockwise90.Height := 16;
RotateCounterClockwise90.OnClick := @OnRotateCounterClockwise90ButtonClick;
AddElement(RotateCounterClockwise90);

RotateClockwise90 := TOpenGL_Bevel.Create(Owner);
RotateClockwise90.Left := 21;
RotateClockwise90.Top := 76;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//RotateClockwise90.SetImage(image);
RotateClockwise90.Transparent := true;
RotateClockwise90.Width := 16;
RotateClockwise90.Height := 16;
RotateClockwise90.OnClick := @OnRotateClockwise90ButtonClick;
AddElement(RotateClockwise90);

Rotate180 := TOpenGL_Bevel.Create(Owner);
Rotate180.Left := 21 + 18;
Rotate180.Top := 76;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//Rotate180.SetImage(image);
Rotate180.Transparent := true;
Rotate180.Width := 16;
Rotate180.Height := 16;
Rotate180.OnClick := @OnRotate180ButtonClick;
AddElement(Rotate180);

RotateAngle := TOpenGL_Bevel.Create(Owner);
RotateAngle.Left := 21 + 18 + 18;
RotateAngle.Top := 76;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//RotateAngle.SetImage(image);
RotateAngle.Transparent := true;
RotateAngle.Width := 16;
RotateAngle.Height := 16;
RotateAngle.OnClick := @OnRotateAngleButtonClick;
AddElement(RotateAngle);

BrightenButton := TOpenGL_Bevel.Create(Owner);
BrightenButton.Left := 3;
BrightenButton.Top := 95;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//BrightenButton.SetImage(image);
BrightenButton.Transparent := true;
BrightenButton.Width := 32;
BrightenButton.Height := 32;
BrightenButton.OnClick := @OnBrightenButtonClick;
AddElement(BrightenButton);

DarkenButton := TOpenGL_Bevel.Create(Owner);
DarkenButton.Left := 41;
DarkenButton.Top := 95;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//DarkenButton.SetImage(image);
DarkenButton.Transparent := true;
DarkenButton.Width := 32;
DarkenButton.Height := 32;
DarkenButton.OnClick := @OnDarkenButtonClick;
AddElement(DarkenButton);

CurserSize1 := TOpenGL_Bevel.Create(Owner);
CurserSize1.Left := 3;
CurserSize1.Top := 130;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CurserSize1.SetImage(image);
CurserSize1.Transparent := true;
CurserSize1.Width := 16;
CurserSize1.Height := 16;
CurserSize1.OnClick := @OnCurserSize1ButtonClick;
AddElement(CurserSize1);

CurserSize2 := TOpenGL_Bevel.Create(Owner);
CurserSize2.Left := 21;
CurserSize2.Top := 130;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CurserSize2.SetImage(image);
CurserSize2.Transparent := true;
CurserSize2.Width := 16;
CurserSize2.Height := 16;
CurserSize2.OnClick := @OnCurserSize2ButtonClick;
AddElement(CurserSize2);

CurserSize3 := TOpenGL_Bevel.Create(Owner);
CurserSize3.Left := 21 + 18;
CurserSize3.Top := 130;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CurserSize3.SetImage(image);
CurserSize3.Transparent := true;
CurserSize3.Width := 16;
CurserSize3.Height := 16;
CurserSize3.OnClick := @OnCurserSize3ButtonClick;
AddElement(CurserSize3);

CurserSize4 := TOpenGL_Bevel.Create(Owner);
CurserSize4.Left := 21 + 18 + 18;
CurserSize4.Top := 130;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CurserSize4.SetImage(image);
CurserSize4.Transparent := true;
CurserSize4.Width := 16;
CurserSize4.Height := 16;
CurserSize4.OnClick := @OnCurserSize4ButtonClick;
AddElement(CurserSize4);

EraserButton := TOpenGL_Bevel.Create(Owner);
EraserButton.Left := 3;
EraserButton.Top := 149;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//EraserButton.SetImage(image);
EraserButton.Transparent := true;
EraserButton.Width := 32;
EraserButton.Height := 32;
EraserButton.OnClick := @OnEraserButtonClick;
AddElement(EraserButton);

PencilButton := TOpenGL_Bevel.Create(Owner);
PencilButton.Left := 3;
PencilButton.Top := 184;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//PencilButton.SetImage(image);
PencilButton.Transparent := true;
PencilButton.Width := 32;
PencilButton.Height := 32;
PencilButton.OnClick := @OnPencilButtonClick;
AddElement(PencilButton);

CursorRoundSize1 := TOpenGL_Bevel.Create(Owner);
CursorRoundSize1.Left := 40;
CursorRoundSize1.Top := 174;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorRoundSize1.SetImage(image);
CursorRoundSize1.Transparent := true;
CursorRoundSize1.Width := 16;
CursorRoundSize1.Height := 16;
CursorRoundSize1.OnClick := @OnCursorRoundSize1Click;
AddElement(CursorRoundSize1);

CursorRoundSize2 := TOpenGL_Bevel.Create(Owner);
CursorRoundSize2.Left := 40;
CursorRoundSize2.Top := 192;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorRoundSize2.SetImage(image);
CursorRoundSize2.Transparent := true;
CursorRoundSize2.Width := 16;
CursorRoundSize2.Height := 16;
CursorRoundSize2.OnClick := @OnCursorRoundSize2Click;
AddElement(CursorRoundSize2);

CursorRoundSize3 := TOpenGL_Bevel.Create(Owner);
CursorRoundSize3.Left := 40;
CursorRoundSize3.Top := 210;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorRoundSize3.SetImage(image);
CursorRoundSize3.Transparent := true;
CursorRoundSize3.Width := 16;
CursorRoundSize3.Height := 16;
CursorRoundSize3.OnClick := @OnCursorRoundSize3Click;
AddElement(CursorRoundSize3);

CursorSquareSize1 := TOpenGL_Bevel.Create(Owner);
CursorSquareSize1.Left := 58;
CursorSquareSize1.Top := 174;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorSquareSize1.SetImage(image);
CursorSquareSize1.Transparent := true;
CursorSquareSize1.Width := 16;
CursorSquareSize1.Height := 16;
CursorSquareSize1.OnClick := @OnCursorSquareSize1Click;
AddElement(CursorSquareSize1);

CursorSquareSize2 := TOpenGL_Bevel.Create(Owner);
CursorSquareSize2.Left := 58;
CursorSquareSize2.Top := 192;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorSquareSize2.SetImage(image);
CursorSquareSize2.Transparent := true;
CursorSquareSize2.Width := 16;
CursorSquareSize2.Height := 16;
CursorSquareSize2.OnClick := @OnCursorSquareSize2Click;
AddElement(CursorSquareSize2);

CursorSquareSize3 := TOpenGL_Bevel.Create(Owner);
CursorSquareSize3.Left := 58;
CursorSquareSize3.Top := 210;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CursorSquareSize3.SetImage(image);
CursorSquareSize3.Transparent := true;
CursorSquareSize3.Width := 16;
CursorSquareSize3.Height := 16;
CursorSquareSize3.OnClick := @OnCursorSquareSize3Click;
AddElement(CursorSquareSize3);

LineButton := TOpenGL_Bevel.Create(Owner);
LineButton.Left := 3;
LineButton.Top := 219;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//LineButton.SetImage(image);
LineButton.Transparent := true;
LineButton.Width := 32;
LineButton.Height := 32;
LineButton.OnClick := @OnLineButtonClick;
AddElement(LineButton);

CircleButton := TOpenGL_Bevel.Create(Owner);
CircleButton.Left := 3;
CircleButton.Top := 254;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//CircleButton.SetImage(image);
CircleButton.Transparent := true;
CircleButton.Width := 32;
CircleButton.Height := 32;
CircleButton.OnClick := @OnCircleButtonClick;
AddElement(CircleButton);

SquareButton := TOpenGL_Bevel.Create(Owner);
SquareButton.Left := 3;
SquareButton.Top := 289;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//SquareButton.SetImage(image);
SquareButton.Transparent := true;
SquareButton.Width := 32;
SquareButton.Height := 32;
SquareButton.OnClick := @OnSquareButtonClick;
AddElement(SquareButton);

OutlineButton := TOpenGL_Bevel.Create(Owner);
OutlineButton.Left := 40;
OutlineButton.Top := 279;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//OutlineButton.SetImage(image);
OutlineButton.Transparent := true;
OutlineButton.Width := 16;
OutlineButton.Height := 16;
OutlineButton.OnClick := @OnOutlineButtonClick;
AddElement(OutlineButton);

FilledButton := TOpenGL_Bevel.Create(Owner);
FilledButton.Left := 58;
FilledButton.Top := 279;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//FilledButton.SetImage(image);
FilledButton.Transparent := true;
FilledButton.Width := 16;
FilledButton.Height := 16;
FilledButton.OnClick := @OnFilledButtonClick;
AddElement(FilledButton);

MirrorButton := TOpenGL_Bevel.Create(Owner);
MirrorButton.Left := 3;
MirrorButton.Top := 324;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//MirrorButton.SetImage(image);
MirrorButton.Transparent := true;
MirrorButton.Width := 32;
MirrorButton.Height := 32;
MirrorButton.OnClick := @OnMirrorButtonClick;
AddElement(MirrorButton);

Mirror4Button := TOpenGL_Bevel.Create(Owner);
Mirror4Button.Left := 40;
Mirror4Button.Top := 322;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//Mirror4Button.SetImage(image);
Mirror4Button.Transparent := true;
Mirror4Button.Width := 16;
Mirror4Button.Height := 16;
Mirror4Button.OnClick := @OnMirror4ButtonClick;
AddElement(Mirror4Button);

MirrorVertButton := TOpenGL_Bevel.Create(Owner);
MirrorVertButton.Left := 40;
MirrorVertButton.Top := 340;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//MirrorVertButton.SetImage(image);
MirrorVertButton.Transparent := true;
MirrorVertButton.Width := 16;
MirrorVertButton.Height := 16;
MirrorVertButton.OnClick := @OnMirrorVertButtonClick;
AddElement(MirrorVertButton);

MirrorHorButton := TOpenGL_Bevel.Create(Owner);
MirrorHorButton.Left := 58;
MirrorHorButton.Top := 340;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//MirrorHorButton.SetImage(image);
MirrorHorButton.Transparent := true;
MirrorHorButton.Width := 16;
MirrorHorButton.Height := 16;
MirrorHorButton.OnClick := @OnMirrorHorButtonClick;
AddElement(MirrorHorButton);

FloodFillButton := TOpenGL_Bevel.Create(Owner);
FloodFillButton.Left := 3;
FloodFillButton.Top := 359;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//FloodFillButton.SetImage(image);
FloodFillButton.Transparent := true;
FloodFillButton.Width := 32;
FloodFillButton.Height := 32;
FloodFillButton.OnClick := @OnFloodFillButtonClick;
AddElement(FloodFillButton);

FloodFillModeButton := TOpenGL_Bevel.Create(Owner);
FloodFillModeButton.Left := 41;
FloodFillModeButton.Top := 359;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//FloodFillModeButton.SetImage(image);
FloodFillModeButton.Transparent := true;
FloodFillModeButton.Width := 32;
FloodFillModeButton.Height := 32;
FloodFillModeButton.OnClick := @OnFloodFillModeButtonClick;
AddElement(FloodFillModeButton);

ColorPickButton := TOpenGL_Bevel.Create(Owner);
ColorPickButton.Left := 3;
ColorPickButton.Top := 394;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//ColorPickButton.SetImage(image);
ColorPickButton.Transparent := true;
ColorPickButton.Width := 32;
ColorPickButton.Height := 32;
ColorPickButton.OnClick := @OnColorPickButtonClick;
AddElement(ColorPickButton);

SelectTransparentColor := TOpenGL_Bevel.Create(Owner);
SelectTransparentColor.Left := 128;
SelectTransparentColor.Top := 428;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//SelectTransparentColor.SetImage(image);
SelectTransparentColor.Transparent := true;
SelectTransparentColor.Width := 16;
SelectTransparentColor.Height := 16;
SelectTransparentColor.OnClick := @OnSelectTransparentColorClick;
AddElement(SelectTransparentColor);

SelectLayerButton := TOpenGL_Bevel.Create(Owner);
SelectLayerButton.Left := 640 - 35;
SelectLayerButton.Top := 480 - 35;
//image := OpenGL_GraphikEngine.LoadAlphaColorGraphik('GFX' + PathDelim + 'Exit.bmp', Fuchsia, smClamp);
//SelectLayerButton.SetImage(image);
SelectLayerButton.Transparent := true;
SelectLayerButton.Width := 32;
SelectLayerButton.Height := 32;
SelectLayerButton.OnClick := @OnSelectLayerButtonClick;
AddElement(SelectLayerButton);
