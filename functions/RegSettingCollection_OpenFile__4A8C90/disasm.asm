0x4A8C90: cmp     byte ptr [esp+dwDisposition], 0
0x4A8C95: jz      short loc_4A8CC7
0x4A8C97: lea     eax, [esp+dwDisposition]
0x4A8C9B: push    eax; lpdwDisposition
0x4A8C9C: lea     edx, [ecx+108h]
0x4A8CA2: push    edx; phkResult
0x4A8CA3: push    0; lpSecurityAttributes
0x4A8CA5: push    0F003Fh; samDesired
0x4A8CAA: push    0; dwOptions
0x4A8CAC: push    0; lpClass
0x4A8CAE: push    0; Reserved
0x4A8CB0: add     ecx, 4
0x4A8CB3: push    ecx; lpSubKey
0x4A8CB4: push    80000002h; hKey
0x4A8CB9: call    dword ptr ds:0A28008h
0x4A8CBF: test    eax, eax
0x4A8CC1: setz    al
0x4A8CC4: retn    4
0x4A8CC7: lea     eax, [ecx+108h]
0x4A8CCD: push    eax; phkResult
0x4A8CCE: push    0F003Fh; samDesired
0x4A8CD3: push    0; ulOptions
0x4A8CD5: add     ecx, 4
0x4A8CD8: push    ecx; lpSubKey
0x4A8CD9: push    80000002h; hKey
0x4A8CDE: call    dword ptr ds:0A28004h
0x4A8CE4: test    eax, eax
0x4A8CE6: setz    al
0x4A8CE9: retn    4
