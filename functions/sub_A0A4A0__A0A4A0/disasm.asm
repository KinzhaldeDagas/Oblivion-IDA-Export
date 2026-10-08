0xA0A4A0: push    offset stru_B3F684; parent
0xA0A4A5: push    offset aNiloddata; "NiLODData"
0xA0A4AA: mov     ecx, offset stru_B4012C; this
0xA0A4AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A4B4: retn
