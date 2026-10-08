0xA04020: push    offset stru_B3FC98; parent
0xA04025: push    offset aNiuvcontroller; "NiUVController"
0xA0402A: mov     ecx, offset stru_B3D8CC; this
0xA0402F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04034: retn
