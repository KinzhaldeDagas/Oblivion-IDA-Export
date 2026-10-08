0xA10B80: push    offset stru_B3FC98; parent
0xA10B85: push    offset aNid3dcontrolle; "NiD3DController"
0xA10B8A: mov     ecx, offset stru_B42850; this
0xA10B8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10B94: retn
