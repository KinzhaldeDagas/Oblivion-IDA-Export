0xA0D5D0: push    offset stru_B40D08; parent
0xA0D5D5: push    offset aNipsysgrowfade; "NiPSysGrowFadeModifier"
0xA0D5DA: mov     ecx, offset stru_B4128C; this
0xA0D5DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0D5E4: retn
