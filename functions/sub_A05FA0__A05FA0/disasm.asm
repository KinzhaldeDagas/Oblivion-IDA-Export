0xA05FA0: push    offset stru_B3F684; parent
0xA05FA5: push    offset aNitransformdat; "NiTransformData"
0xA05FAA: mov     ecx, offset stru_B3E0C4; this
0xA05FAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05FB4: retn
