0xA068A0: push    offset stru_B3EF5C; parent
0xA068A5: push    offset aNicolorextrada; "NiColorExtraDataController"
0xA068AA: mov     ecx, offset stru_B3E314; this
0xA068AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA068B4: retn
