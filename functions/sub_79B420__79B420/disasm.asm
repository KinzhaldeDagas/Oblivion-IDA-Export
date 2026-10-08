0x79B420: push    ebx; Forward copy-assignment over SFrondTexture records: deep-assigns filename and copies four scalar floats, returning the destination end.
0x79B421: mov     ebx, [esp+4+last]
0x79B425: push    esi
0x79B426: mov     esi, [esp+8+first]
0x79B42A: cmp     esi, ebx
0x79B42C: jz      short loc_79B467
0x79B42E: push    edi
0x79B42F: mov     edi, [esp+0Ch+destinationFirst]
0x79B433: push    0FFFFFFFFh; count
0x79B435: push    0; offset
0x79B437: push    esi; source
0x79B438: mov     ecx, edi; this
0x79B43A: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x79B43F: fld     dword ptr [esi+1Ch]
0x79B442: fstp    dword ptr [edi+1Ch]
0x79B445: add     esi, 2Ch ; ','
0x79B448: fld     dword ptr [esi-0Ch]
0x79B44B: add     edi, 2Ch ; ','
0x79B44E: cmp     esi, ebx
0x79B450: fstp    dword ptr [edi-0Ch]
0x79B453: fld     dword ptr [esi-8]
0x79B456: fstp    dword ptr [edi-8]
0x79B459: fld     dword ptr [esi-4]
0x79B45C: fstp    dword ptr [edi-4]
0x79B45F: jnz     short loc_79B433
0x79B461: mov     eax, edi
0x79B463: pop     edi
0x79B464: pop     esi
0x79B465: pop     ebx
0x79B466: retn
0x79B467: mov     eax, [esp+8+destinationFirst]
0x79B46B: pop     esi
0x79B46C: pop     ebx
0x79B46D: retn
