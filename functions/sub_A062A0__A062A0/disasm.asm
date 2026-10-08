0xA062A0: push    offset stru_B3EF5C; parent
0xA062A5: push    offset aNifloatsextrad; "NiFloatsExtraDataController"
0xA062AA: mov     ecx, offset stru_B3E1AC; this
0xA062AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA062B4: retn
