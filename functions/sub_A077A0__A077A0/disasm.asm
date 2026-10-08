0xA077A0: push    offset stru_B3F684; parent
0xA077A5: push    offset aNibsplinedata; "NiBSplineData"
0xA077AA: mov     ecx, offset stru_B3E6F0; this
0xA077AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA077B4: retn
