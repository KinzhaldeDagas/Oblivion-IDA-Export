0xA02E80: push    offset stru_B3CDF8; parent
0xA02E85: push    offset aNimultitargett; "NiMultiTargetTransformController"
0xA02E8A: mov     ecx, offset stru_B3CD7C; this
0xA02E8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02E94: retn
