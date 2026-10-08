0x79B6B0: push    ebx; Assigns one SFrondTexture value throughout [first,last), including deep filename assignment and all four scalar fields.
0x79B6B1: mov     ebx, [esp+4+last]
0x79B6B5: push    esi
0x79B6B6: mov     esi, [esp+8+first]
0x79B6BA: cmp     esi, ebx
0x79B6BC: jz      short loc_79B6EF
0x79B6BE: push    edi
0x79B6BF: mov     edi, [esp+0Ch+value]
0x79B6C3: push    0FFFFFFFFh; count
0x79B6C5: push    0; offset
0x79B6C7: push    edi; source
0x79B6C8: mov     ecx, esi; this
0x79B6CA: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x79B6CF: fld     dword ptr [edi+1Ch]
0x79B6D2: fstp    dword ptr [esi+1Ch]
0x79B6D5: add     esi, 2Ch ; ','
0x79B6D8: cmp     esi, ebx
0x79B6DA: fld     dword ptr [edi+20h]
0x79B6DD: fstp    dword ptr [esi-0Ch]
0x79B6E0: fld     dword ptr [edi+24h]
0x79B6E3: fstp    dword ptr [esi-8]
0x79B6E6: fld     dword ptr [edi+28h]
0x79B6E9: fstp    dword ptr [esi-4]
0x79B6EC: jnz     short loc_79B6C3
0x79B6EE: pop     edi
0x79B6EF: pop     esi
0x79B6F0: pop     ebx
0x79B6F1: retn
