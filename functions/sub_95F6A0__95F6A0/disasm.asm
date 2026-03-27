0x95F6A0: push    20h ; ' '; Size
0x95F6A2: call    FormHeapAlloc
0x95F6A7: add     esp, 4
0x95F6AA: test    eax, eax
0x95F6AC: jz      short loc_95F6C0
0x95F6AE: push    offset dword_B258DC
0x95F6B3: push    offset Vector3_InitValue?
0x95F6B8: mov     ecx, eax
0x95F6BA: call    sub_95F620
0x95F6BF: retn
0x95F6C0: xor     eax, eax
0x95F6C2: retn
