[Center_Infos-TheyCallMePapa.Style]
ImageAlpha=(#TopBarTitleOpacity#*((#ShowHideCenterInfosApp#-1)*-1))
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)*((#ShowHideCenterInfosApp#-1)*-1))

[Center_Infos-TheyCallMePapa]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle

[TimeCenter]
Hidden=1

[CenterInfos.Style1]
MeasureName=MeasureCenterTime
Text=%1
InlineSetting2=None
InlineSetting3=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]][#TopBarSections]]
InlineSetting4=

[CenterInfos.Style2]
Text=[#PlayerTitle[#PlayerTypeNum]] - [#PlayerArtist[#PlayerTypeNum]]
InlineSetting2=Color | [#NotificationTextColor[#TopBarSections][#NowPlayingCustomColor]],(#TopBarOpacity1#<>0?([#NowPlayingOpacity[#TopBarSections][#NowPlayingCustomColor]]*(([#SlideNot]-1)*-1)):([#NowPlayingOpacity10]*(([#SlideNot]-1)*-1)))
InlinePattern3="^\.\.\. -"
InlineSetting3=Color | #TopBarFontColor1#,0
InlinePattern4=" - $"
InlineSetting4=Color | #TopBarFontColor1#,0
InlineSetting5=[#NowPlayingShadow[#NowPlayingCustomColor]]
ClipStringW=([#NowPlayingClipW1]-((#TopBarSectionPadding#*4)*#TopBarSections#))
H=(#TopHeight#-(#TopBarCutout#*2)-2)
ClipString=2

[CenterInfos.Style3]
Text="#LastFocusedApp#"
StringCase=[#TopBarTitleCase[#TopBarTitleCaseNum]]
InlinePattern=^[a-zA-Z0-9.,$;]
InlineSetting=Case | [#TopBarTitleCaseApp[#TopBarTitleCaseNum]]
InlineSetting2=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1]0[#TopBarSections]]

[CenterInfos.Meter]
SolidColor=255,55,55,(55*((#DebugModeOFF#-1)*-1))
Meter=String
StringAlign=CenterCenter
StringEffect=None
FontWeight=[#NotificationWeight[#TopBarSections]]
AntiAlias=#TopBarAntiAlias#
MeterStyle=InfoStyle | CenterInfos.Style[#CenterNum]
Padding=#TopBarTitlePadding#
X=([TopBar:W]/2)
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
MouseOverAction=[]
MouseLeaveAction=[]
DynamicVariables=1
Group=Animation | NotificationBar | Buttons00
Hidden=#CenterMeOFF#
