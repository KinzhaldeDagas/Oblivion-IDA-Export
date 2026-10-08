0x9DC280: push    offset parent; parent
0x9DC285: push    offset aBstempnode; "BSTempNode"
0x9DC28A: mov     ecx, offset stru_B33E88; this
0x9DC28F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9DC294: retn
