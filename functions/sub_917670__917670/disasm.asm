0x917670: push    esi
0x917671: push    edi
0x917672: mov     edi, [esp+8+arg_0]
0x917676: mov     eax, [edi]
0x917678: mov     esi, ecx
0x91767A: push    esi
0x91767B: push    1
0x91767D: push    offset aCvxverts; "CvxVerts"
0x917682: mov     ecx, edi
0x917684: call    dword ptr [eax]
0x917686: mov     eax, [esi+38h]
0x917689: test    eax, eax
0x91768B: js      short loc_9176B5
0x91768D: mov     edx, [edi]
0x91768F: and     eax, 3FFFFFFFh
0x917694: lea     eax, [eax+eax*2]
0x917697: shl     eax, 4
0x91769A: push    eax
0x91769B: mov     eax, [esi+34h]
0x91769E: lea     ecx, [eax+eax*2]
0x9176A1: mov     eax, [esi+30h]
0x9176A4: shl     ecx, 4
0x9176A7: push    ecx
0x9176A8: push    eax
0x9176A9: push    1
0x9176AB: push    offset aVerts; "Verts"
0x9176B0: mov     ecx, edi
0x9176B2: call    dword ptr [edx+4]
0x9176B5: mov     eax, [esi+48h]
0x9176B8: test    eax, eax
0x9176BA: js      short loc_9176DE
0x9176BC: mov     ecx, [esi+40h]
0x9176BF: mov     edx, [edi]
0x9176C1: and     eax, 3FFFFFFFh
0x9176C6: shl     eax, 4
0x9176C9: push    eax
0x9176CA: mov     eax, [esi+44h]
0x9176CD: shl     eax, 4
0x9176D0: push    eax
0x9176D1: push    ecx
0x9176D2: push    1
0x9176D4: push    offset aVerts; "Verts"
0x9176D9: mov     ecx, edi
0x9176DB: call    dword ptr [edx+4]
0x9176DE: mov     edx, [edi]
0x9176E0: mov     ecx, edi
0x9176E2: call    dword ptr [edx+14h]
0x9176E5: pop     edi
0x9176E6: pop     esi
0x9176E7: retn    4
