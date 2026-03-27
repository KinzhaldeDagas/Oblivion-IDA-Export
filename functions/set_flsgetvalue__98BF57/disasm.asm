0x98BF57: push    dwTlsIndex; dwTlsIndex
0x98BF5D: call    ds:TlsGetValue
0x98BF63: test    eax, eax
0x98BF65: jnz     short locret_98BF80
0x98BF67: push    lpTlsValue
0x98BF6D: call    __decode_pointer
0x98BF72: pop     ecx
0x98BF73: push    eax; lpTlsValue
0x98BF74: push    dwTlsIndex; dwTlsIndex
0x98BF7A: call    ds:TlsSetValue
0x98BF80: retn
