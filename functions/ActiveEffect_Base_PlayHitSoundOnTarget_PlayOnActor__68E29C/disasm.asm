0x68E29C: test    eax, eax
0x68E29E: push    edi
0x68E29F: jz      short loc_68E2FC
0x68E2A1: mov     ecx, dword ptr [esp+4+a3]
0x68E2A5: push    0; a5
0x68E2A7: push    102h; a4
0x68E2AC: push    ecx; a3
0x68E2AD: push    ebp; a2
0x68E2AE: mov     ecx, eax; this
0x68E2B0: call    sub_65AC50
0x68E2B5: mov     ebp, eax
0x68E2B7: test    ebp, ebp
0x68E2B9: jz      ActiveEffect_Base_PlayHitSoundOnTarget___Done
0x68E2BF: test    bl, bl
0x68E2C1: jz      loc_68E385
0x68E2C7: mov     ecx, [esi+2Ch]
0x68E2CA: test    ecx, ecx
0x68E2CC: jz      short loc_68E2F1
0x68E2CE: call    sub_6B7240
0x68E2D3: mov     edi, [esi+2Ch]
0x68E2D6: test    edi, edi
0x68E2D8: jz      short loc_68E2EA
0x68E2DA: mov     ecx, edi; this
0x68E2DC: call    sub_6B73E0
0x68E2E1: push    edi
0x68E2E2: call    FormHeapFree
0x68E2E7: add     esp, 4
0x68E2EA: mov     dword ptr [esi+2Ch], 0
0x68E2F1: pop     edi
0x68E2F2: pop     ebx
0x68E2F3: mov     [esi+2Ch], ebp
0x68E2F6: pop     esi
0x68E2F7: pop     ebp
0x68E2F8: add     esp, 10h
0x68E2FB: retn
0x68E2FC: mov     ecx, [esi+20h]
0x68E2FF: mov     edx, [ecx]
0x68E301: mov     eax, [edx+4]
0x68E304: call    eax
0x68E306: mov     edi, eax
0x68E308: test    edi, edi
0x68E30A: jz      ActiveEffect_Base_PlayHitSoundOnTarget___Done
0x68E310: mov     ecx, ds:0B33398h
0x68E316: mov     ecx, [ecx+24h]
0x68E319: test    ecx, ecx
0x68E31B: jz      short ActiveEffect_Base_PlayHitSoundOnTarget___Done
0x68E31D: push    0
0x68E31F: push    102h
0x68E324: push    ebp
0x68E325: call    OSGLobals_PlaySound
0x68E32A: mov     esi, eax
0x68E32C: test    esi, esi
0x68E32E: jz      short ActiveEffect_Base_PlayHitSoundOnTarget___Done
0x68E330: mov     edx, [edi]
0x68E332: mov     eax, [edx+174h]
0x68E338: mov     ecx, edi
0x68E33A: call    eax
0x68E33C: mov     ecx, [eax]
0x68E33E: mov     edx, [eax+4]
0x68E341: mov     eax, [eax+8]
0x68E344: sub     esp, 0Ch
0x68E347: mov     [esp+10h+arg_14], eax
0x68E34B: fld     [esp+10h+arg_14]
0x68E34F: fstp    [esp+10h+var_8]; float
0x68E353: mov     [esp+10h+arg_10], edx
0x68E357: fld     [esp+10h+arg_10]
0x68E35B: mov     [esp+10h+arg_C], ecx
0x68E35F: fstp    [esp+10h+var_C]; float
0x68E363: mov     ecx, esi
0x68E365: fld     [esp+10h+arg_C]
0x68E369: fstp    [esp+10h+var_10]; float
0x68E36C: call    sub_6B7360
0x68E371: mov     ecx, dword ptr [esp+4+a3]
0x68E375: push    ecx
0x68E376: mov     ecx, esi
0x68E378: call    sub_6B7190
0x68E37D: pop     edi
0x68E37E: pop     ebx
0x68E37F: pop     esi
0x68E380: pop     ebp
0x68E381: add     esp, 10h
0x68E384: retn
0x68E385: mov     ecx, ebp; this
0x68E387: call    sub_6B73E0
0x68E38C: push    ebp
0x68E38D: call    FormHeapFree
0x68E392: add     esp, 4
