0x6150E0: push    ecx
0x6150E1: cmp     byte ptr [esp+4+arg_0], 0
0x6150E6: push    ebx
0x6150E7: mov     ebx, ecx
0x6150E9: jnz     short loc_61512E
0x6150EB: call    sub_6135F0
0x6150F0: test    eax, eax
0x6150F2: jz      short loc_61511E
0x6150F4: mov     ecx, ebx
0x6150F6: call    sub_6135F0
0x6150FB: mov     ecx, eax
0x6150FD: call    Actor_IsSwimming
0x615102: test    al, al
0x615104: jz      short loc_61511E
0x615106: mov     ecx, [ebx+3Ch]
0x615109: call    Actor_IsSwimming
0x61510E: test    al, al
0x615110: jnz     short loc_61511E
0x615112: mov     ecx, [ebx+3Ch]
0x615115: call    Actor_CanFightInWater
0x61511A: test    al, al
0x61511C: jz      short loc_61512E
0x61511E: cmp     byte ptr [ebx+174h], 0
0x615125: jz      short loc_61512E
0x615127: xor     al, al
0x615129: pop     ebx
0x61512A: pop     ecx
0x61512B: retn    4
0x61512E: mov     eax, [ebx+40h]
0x615131: test    eax, eax
0x615133: jz      short loc_615127
0x615135: mov     ecx, [eax]
0x615137: test    ecx, ecx
0x615139: mov     [esp+8+var_4], ecx
0x61513D: jz      short loc_615127
0x61513F: cmp     dword ptr [eax+4], 0
0x615143: jz      short loc_615127
0x615145: mov     eax, [ecx+4]
0x615148: mov     ecx, ebx
0x61514A: mov     [esp+8+arg_0], eax
0x61514E: call    sub_614290
0x615153: test    al, al
0x615155: jnz     short loc_61517E
0x615157: fild    [esp+8+arg_0]
0x61515B: push    ecx
0x61515C: fmul    dword ptr ds:0B37218h
0x615162: fstp    [esp+0Ch+arg_0]
0x615166: fld     [esp+0Ch+arg_0]
0x61516A: fstp    [esp+0Ch+var_C]; float
0x61516D: call    sub_484370
0x615172: add     esp, 4
0x615175: call    Double_To_SInt32
0x61517A: mov     [esp+8+arg_0], eax
0x61517E: cmp     byte ptr [ebx+158h], 0
0x615185: jnz     short loc_6151AE
0x615187: fild    [esp+8+arg_0]
0x61518B: push    ecx
0x61518C: fmul    dword ptr ds:0B37220h
0x615192: fstp    [esp+0Ch+arg_0]
0x615196: fld     [esp+0Ch+arg_0]
0x61519A: fstp    [esp+0Ch+var_C]; float
0x61519D: call    sub_484370
0x6151A2: add     esp, 4
0x6151A5: call    Double_To_SInt32
0x6151AA: mov     [esp+8+arg_0], eax
0x6151AE: mov     ecx, [ebx+40h]
0x6151B1: mov     ecx, [ecx+4]
0x6151B4: push    ebp
0x6151B5: xor     ebp, ebp
0x6151B7: test    ecx, ecx
0x6151B9: push    edi
0x6151BA: mov     edi, [esp+10h+arg_0]
0x6151BE: jz      short loc_6151EA
0x6151C0: push    esi
0x6151C1: mov     eax, [ecx]
0x6151C3: test    eax, eax
0x6151C5: mov     ecx, [ecx+4]
0x6151C8: jz      short loc_6151E1
0x6151CA: mov     esi, [eax]
0x6151CC: test    esi, esi
0x6151CE: jz      short loc_6151E1
0x6151D0: mov     edx, [eax+4]
0x6151D3: cmp     edx, edi
0x6151D5: jl      short loc_6151E1
0x6151D7: cmp     eax, [esp+14h+var_4]
0x6151DB: jz      short loc_6151E1
0x6151DD: mov     edi, edx
0x6151DF: mov     ebp, esi
0x6151E1: test    ecx, ecx
0x6151E3: jnz     short loc_6151C1
0x6151E5: test    ebp, ebp
0x6151E7: pop     esi
0x6151E8: jnz     short loc_6151F3
0x6151EA: pop     edi
0x6151EB: pop     ebp
0x6151EC: xor     al, al
0x6151EE: pop     ebx
0x6151EF: pop     ecx
0x6151F0: retn    4
0x6151F3: mov     edx, [esp+10h+arg_0]
0x6151F7: mov     eax, [esp+10h+var_4]
0x6151FB: add     edi, 0Ah
0x6151FE: push    edi
0x6151FF: push    ebp
0x615200: mov     ecx, ebx
0x615202: mov     [eax+4], edx
0x615205: call    sub_6243D0
0x61520A: pop     edi
0x61520B: pop     ebp
0x61520C: mov     al, 1
0x61520E: pop     ebx
0x61520F: pop     ecx
0x615210: retn    4
