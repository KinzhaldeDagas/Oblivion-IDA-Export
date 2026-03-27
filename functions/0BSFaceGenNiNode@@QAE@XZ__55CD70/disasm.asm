0x55CD70: push    0FFFFFFFFh
0x55CD72: push    offset ??0BSFaceGenNiNode@@QAE@XZ_SEH
0x55CD77: mov     eax, large fs:0
0x55CD7D: push    eax
0x55CD7E: push    ecx
0x55CD7F: push    ebx
0x55CD80: push    ebp
0x55CD81: push    esi
0x55CD82: push    edi
0x55CD83: mov     eax, ds:0B30AACh
0x55CD88: xor     eax, esp
0x55CD8A: push    eax
0x55CD8B: lea     eax, [esp+24h+var_C]
0x55CD8F: mov     large fs:0, eax
0x55CD95: mov     ebp, ecx
0x55CD97: mov     [esp+24h+var_10], ebp
0x55CD9B: xor     ebx, ebx
0x55CD9D: push    ebx
0x55CD9E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x55CDA3: mov     dword ptr [ebp+0], offset ??_7BSFaceGenNiNode@@6B@; const BSFaceGenNiNode::`vftable'
0x55CDAA: mov     [esp+24h+var_4], ebx
0x55CDAE: mov     [ebp+0DCh], ebx
0x55CDB4: fld     dword ptr ds:0A30634h
0x55CDBA: fstp    dword ptr [ebp+10Ch]
0x55CDC0: mov     [ebp+105h], bl
0x55CDC6: mov     [ebp+104h], bl
0x55CDCC: mov     byte ptr [ebp+106h], 1
0x55CDD3: mov     byte ptr [ebp+107h], 1
0x55CDDA: mov     [ebp+108h], bl
0x55CDE0: mov     [ebp+110h], bl
0x55CDE6: mov     [ebp+111h], bl
0x55CDEC: mov     esi, [ebp+0DCh]
0x55CDF2: cmp     esi, ebx
0x55CDF4: mov     byte ptr [esp+24h+var_4], 1
0x55CDF9: jz      short loc_55CE1D
0x55CDFB: lea     eax, [esi+4]
0x55CDFE: push    eax; lpAddend
0x55CDFF: call    dword ptr ds:0A2807Ch
0x55CE05: test    eax, eax
0x55CE07: jnz     short loc_55CE17
0x55CE09: cmp     esi, ebx
0x55CE0B: jz      short loc_55CE17
0x55CE0D: mov     edx, [esi]
0x55CE0F: mov     eax, [edx]
0x55CE11: push    1
0x55CE13: mov     ecx, esi
0x55CE15: call    eax
0x55CE17: mov     [ebp+0DCh], ebx
0x55CE1D: lea     edi, [ebp+0E0h]
0x55CE23: mov     ecx, 9
0x55CE28: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x55CE2D: rep movsd
0x55CE2F: mov     [ebp+112h], bl
0x55CE35: mov     [ebp+114h], ebx
0x55CE3B: mov     eax, ebp
0x55CE3D: mov     ecx, dword ptr [esp+24h+var_C]
0x55CE41: mov     large fs:0, ecx
0x55CE48: pop     ecx
0x55CE49: pop     edi
0x55CE4A: pop     esi
0x55CE4B: pop     ebp
0x55CE4C: pop     ebx
0x55CE4D: add     esp, 10h
0x55CE50: retn
