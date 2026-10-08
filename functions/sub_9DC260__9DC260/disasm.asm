0x9DC260: push    offset parent; parent
0x9DC265: push    offset aBstempnodemana; "BSTempNodeManager"
0x9DC26A: mov     ecx, offset stru_B33E80; this
0x9DC26F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9DC274: retn
