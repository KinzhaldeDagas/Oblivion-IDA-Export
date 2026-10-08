0xA0A4E0: push    offset stru_B3FCD4; parent
0xA0A4E5: push    offset aNiscreengeomet; "NiScreenGeometry"
0xA0A4EA: mov     ecx, offset stru_B40140; this
0xA0A4EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A4F4: retn
