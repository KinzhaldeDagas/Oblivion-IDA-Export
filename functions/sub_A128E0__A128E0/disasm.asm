0xA128E0: push    offset stru_BA7F9C; parent
0xA128E5: push    offset aBhkmoppbvtrees; "bhkMoppBvTreeShape"
0xA128EA: mov     ecx, offset stru_BA80F8; this
0xA128EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA128F4: retn
