0x4ED430: sub     esp, 8
0x4ED433: push    esi
0x4ED434: push    edi
0x4ED435: mov     edi, [esp+10h+arg_0]
0x4ED439: test    edi, edi
0x4ED43B: mov     esi, ecx
0x4ED43D: jz      short loc_4ED4B2
0x4ED43F: mov     eax, [esi]
0x4ED441: movsx   ecx, word ptr [eax+8]
0x4ED445: shl     ecx, 11h
0x4ED448: mov     [esp+10h+arg_0], ecx
0x4ED44C: mov     ecx, [esp+10h+arg_8]
0x4ED450: fild    [esp+10h+arg_0]
0x4ED454: fstp    dword ptr [esi+18h]
0x4ED457: movsx   edx, word ptr [eax+0Ah]
0x4ED45B: mov     eax, [esp+10h+arg_C]
0x4ED45F: shl     edx, 11h
0x4ED462: mov     [esp+10h+arg_0], edx
0x4ED466: push    eax; float
0x4ED467: push    ecx; float
0x4ED468: fild    [esp+18h+arg_0]
0x4ED46C: push    ecx
0x4ED46D: mov     ecx, esi
0x4ED46F: fstp    [esp+1Ch+arg_0]
0x4ED473: fld     [esp+1Ch+arg_0]
0x4ED477: fst     dword ptr [esi+1Ch]
0x4ED47A: fld     dword ptr [esi+18h]
0x4ED47D: fstp    [esp+1Ch+var_8]
0x4ED481: mov     eax, [esp+1Ch+var_8]
0x4ED485: fstp    [esp+1Ch+var_4]
0x4ED489: mov     edx, [esp+1Ch+var_4]
0x4ED48D: fld     dword ptr ds:0A47B20h
0x4ED493: fstp    [esp+1Ch+var_1C]; float
0x4ED496: push    edx; float
0x4ED497: push    eax; float
0x4ED498: call    sub_4EC870
0x4ED49D: fld     [esp+10h+arg_4]
0x4ED4A1: fcompp
0x4ED4A3: fnstsw  ax
0x4ED4A5: test    ah, 5
0x4ED4A8: jp      short loc_4ED4BC
0x4ED4AA: push    edi
0x4ED4AB: mov     ecx, esi
0x4ED4AD: call    sub_4ECAE0
0x4ED4B2: pop     edi
0x4ED4B3: xor     eax, eax
0x4ED4B5: pop     esi
0x4ED4B6: add     esp, 8
0x4ED4B9: retn    14h
0x4ED4BC: mov     eax, [esi+8]
0x4ED4BF: cmp     eax, 3
0x4ED4C2: jz      short loc_4ED4B2
0x4ED4C4: cmp     eax, 5
0x4ED4C7: jz      short loc_4ED4CE
0x4ED4C9: cmp     eax, 1
0x4ED4CC: jnz     short loc_4ED51A
0x4ED4CE: cmp     dword ptr [esi+2Ch], 0
0x4ED4D2: jnz     short loc_4ED51A
0x4ED4D4: mov     ecx, esi
0x4ED4D6: call    sub_4ED320
0x4ED4DB: test    al, al
0x4ED4DD: jnz     short loc_4ED4F8
0x4ED4DF: mov     eax, [esi]
0x4ED4E1: movsx   ecx, word ptr [eax+0Ah]
0x4ED4E5: movsx   edx, word ptr [eax+8]
0x4ED4E9: push    ecx
0x4ED4EA: push    edx; ArgList
0x4ED4EB: push    offset aTesterrainlo_1; "TESTerrainLODQuad::BuildMesh() failed f"...
0x4ED4F0: call    PrintError
0x4ED4F5: add     esp, 0Ch
0x4ED4F8: mov     ecx, [esi+2Ch]
0x4ED4FB: test    ecx, ecx
0x4ED4FD: jz      short loc_4ED4B2
0x4ED4FF: fldz
0x4ED501: sub     esp, 0Ch
0x4ED504: fstp    [esp+1Ch+var_14]; float
0x4ED508: fld     dword ptr [esi+1Ch]
0x4ED50B: fstp    [esp+1Ch+var_18]; float
0x4ED50F: fld     dword ptr [esi+18h]
0x4ED512: fstp    [esp+1Ch+var_1C]; float
0x4ED515: call    sub_404CF0
0x4ED51A: mov     eax, [esi+8]
0x4ED51D: cmp     eax, 2
0x4ED520: jz      short loc_4ED527
0x4ED522: cmp     eax, 4
0x4ED525: jnz     short loc_4ED54B
0x4ED527: mov     ecx, [esi+2Ch]
0x4ED52A: mov     eax, [edi]
0x4ED52C: mov     edx, [eax+84h]
0x4ED532: push    1
0x4ED534: push    ecx
0x4ED535: mov     ecx, edi
0x4ED537: call    edx
0x4ED539: mov     dword ptr [esi+8], 3
0x4ED540: mov     ecx, ds:0B333A0h
0x4ED546: call    sub_43FCD0
0x4ED54B: mov     eax, [esi+24h]
0x4ED54E: pop     edi
0x4ED54F: sub     eax, 2
0x4ED552: pop     esi
0x4ED553: add     esp, 8
0x4ED556: retn    14h
