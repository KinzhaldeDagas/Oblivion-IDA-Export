0x526230: sub     esp, 2Ch
0x526233: push    ebx
0x526234: push    ebp
0x526235: mov     ebx, ecx
0x526237: xor     eax, eax
0x526239: push    esi
0x52623A: mov     [esp+38h+a1.member.refID+1], eax
0x52623E: lea     edx, [ebx+108h]
0x526244: push    edi
0x526245: xor     esi, esi
0x526247: mov     dword ptr [esp+3Ch+a1.member.pad], esi
0x52624B: mov     [esp+3Ch+a1.member.flags+1], edx
0x52624F: nop
0x526250: mov     ecx, [edx]
0x526252: mov     edi, [edx+4]
0x526255: xor     ebp, ebp
0x526257: test    ecx, ecx
0x526259: mov     [esp+3Ch+var_8], ecx
0x52625D: mov     [esp+3Ch+a1.vtbl+1], edi
0x526261: jbe     short loc_5262CB
0x526263: xor     edi, edi
0x526265: cmp     [esp+3Ch+a1.vtbl+1], edi
0x526269: jbe     short loc_5262C4
0x52626B: lea     eax, [eax+esi+0Bh]
0x52626F: lea     eax, [eax+eax*2]
0x526272: lea     esi, [ebx+eax*8]
0x526275: mov     eax, [esi+0Ch]
0x526278: test    eax, eax
0x52627A: jz      short loc_526286
0x52627C: mov     ecx, [esi+10h]
0x52627F: sub     ecx, eax
0x526281: sar     ecx, 2
0x526284: jnz     short loc_52628B
0x526286: call    __invalid_parameter_noinfo
0x52628B: mov     edx, [esi+4]
0x52628E: mov     eax, [esi+0Ch]
0x526291: imul    edx, ebp
0x526294: add     edx, edi
0x526296: push    4; a2
0x526298: lea     ecx, [esp+40h+var_C]
0x52629C: fld     dword ptr [eax+edx*4]
0x52629F: push    ecx; a1
0x5262A0: mov     ecx, ebx
0x5262A2: fstp    [esp+44h+var_C]
0x5262A6: call    TESForm_SaveDataToCurrentSaveGame
0x5262AB: add     edi, 1
0x5262AE: cmp     edi, [esp+3Ch+a1.vtbl+1]
0x5262B2: jb      short loc_526275
0x5262B4: mov     esi, dword ptr [esp+3Ch+a1.member.pad]
0x5262B8: mov     ecx, [esp+3Ch+var_8]
0x5262BC: mov     edx, [esp+3Ch+a1.member.flags+1]
0x5262C0: mov     eax, [esp+3Ch+a1.member.refID+1]
0x5262C4: add     ebp, 1
0x5262C7: cmp     ebp, ecx
0x5262C9: jb      short loc_526263
0x5262CB: add     esi, 1
0x5262CE: add     edx, 18h
0x5262D1: cmp     esi, 2
0x5262D4: mov     dword ptr [esp+3Ch+a1.member.pad], esi
0x5262D8: mov     [esp+3Ch+a1.member.flags+1], edx
0x5262DC: jb      loc_526250
0x5262E2: add     eax, 2
0x5262E5: cmp     eax, 4
0x5262E8: mov     [esp+3Ch+a1.member.refID+1], eax
0x5262EC: jb      loc_526245
0x5262F2: mov     eax, [ebx+0E8h]
0x5262F8: test    eax, eax
0x5262FA: mov     [esp+3Ch+a1.member.modlist.data+1], 0
0x526302: jz      short loc_52630B
0x526304: mov     edx, [eax+0Ch]
0x526307: mov     [esp+3Ch+a1.member.modlist.data+1], edx
0x52630B: push    4
0x52630D: lea     eax, [esp+40h+a1.member.modlist.data+1]
0x526311: push    eax
0x526312: mov     ecx, ebx
0x526314: call    TESForm_SaveFormIDToCurrentSaveGame
0x526319: mov     eax, [ebx+1C8h]
0x52631F: xor     esi, esi
0x526321: cmp     eax, esi
0x526323: mov     [esp+3Ch+a1.member.modlist.next+1], esi
0x526327: jz      short loc_526330
0x526329: mov     ecx, [eax+0Ch]
0x52632C: mov     [esp+3Ch+a1.member.modlist.next+1], ecx
0x526330: push    4
0x526332: lea     edx, [esp+40h+a1.member.modlist.next+1]
0x526336: push    edx
0x526337: mov     ecx, ebx
0x526339: call    TESForm_SaveFormIDToCurrentSaveGame
0x52633E: mov     eax, [ebx+1D0h]
0x526344: pop     edi
0x526345: mov     [esp+38h+var_10], esi
0x526349: cmp     eax, esi
0x52634B: pop     esi
0x52634C: pop     ebp
0x52634D: jz      short loc_526356
0x52634F: mov     eax, [eax+0Ch]
0x526352: mov     [esp+30h+var_10], eax
0x526356: push    4
0x526358: lea     ecx, [esp+34h+var_10]
0x52635C: push    ecx
0x52635D: mov     ecx, ebx
0x52635F: call    TESForm_SaveFormIDToCurrentSaveGame
0x526364: push    4; a2
0x526366: lea     edx, [ebx+1CCh]
0x52636C: push    edx; a1
0x52636D: mov     ecx, ebx
0x52636F: call    TESForm_SaveDataToCurrentSaveGame
0x526374: push    4; a2
0x526376: lea     eax, [ebx+1E8h]
0x52637C: push    eax; a1
0x52637D: mov     ecx, ebx
0x52637F: call    TESForm_SaveDataToCurrentSaveGame
0x526384: mov     ecx, ebx
0x526386: mov     byte ptr [esp+30h+a1.vtbl], 0
0x52638B: call    TESActorBase_IsFemale
0x526390: cmp     eax, 1
0x526393: jnz     short loc_526399
0x526395: mov     byte ptr [esp+30h+a1.vtbl], al
0x526399: push    1; a2
0x52639B: lea     ecx, [esp+34h+a1]
0x52639F: push    ecx; a1
0x5263A0: mov     ecx, ebx
0x5263A2: call    TESForm_SaveDataToCurrentSaveGame
0x5263A7: pop     ebx
0x5263A8: add     esp, 2Ch
0x5263AB: retn    4
