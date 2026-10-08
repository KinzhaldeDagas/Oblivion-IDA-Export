0xA0A0E0: push    offset stru_B3FD90; parent
0xA0A0E5: push    offset aBspackedadditi; "BSPackedAdditionalGeometryData"
0xA0A0EA: mov     ecx, offset stru_B3FD98; this
0xA0A0EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A0F4: retn
