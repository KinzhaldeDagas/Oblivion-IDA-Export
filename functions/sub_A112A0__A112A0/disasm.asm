0xA112A0: push    offset parent; parent
0xA112A5: push    offset aShadowscenenod; "ShadowSceneNode"
0xA112AA: mov     ecx, offset stru_B43388; this
0xA112AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA112B4: retn
