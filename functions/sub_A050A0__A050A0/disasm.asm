0xA050A0: push    offset stru_B3ED80; parent
0xA050A5: push    offset aNipoint3interp; "NiPoint3Interpolator"
0xA050AA: mov     ecx, offset stru_B3DCF0; this
0xA050AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA050B4: retn
