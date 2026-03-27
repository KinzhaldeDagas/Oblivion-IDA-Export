0x5E4920: push    ecx
0x5E4921: push    ebx
0x5E4922: push    ebp
0x5E4923: mov     ebp, [esp+0Ch+arg_0]
0x5E4927: test    ebp, ebp
0x5E4929: mov     ebx, ecx
0x5E492B: jz      loc_5E49F7
0x5E4931: mov     eax, [ebp+8]
0x5E4934: test    eax, eax
0x5E4936: jz      loc_5E49F7
0x5E493C: cmp     byte ptr [eax+4], 21h ; '!'
0x5E4940: jnz     loc_5E49F7
0x5E4946: add     eax, 60h ; '`'
0x5E4949: push    esi
0x5E494A: jz      short loc_5E4951
0x5E494C: mov     esi, [eax+4]
0x5E494F: jmp     short loc_5E4953
0x5E4951: xor     esi, esi
0x5E4953: test    esi, esi
0x5E4955: jz      loc_5E49F6
0x5E495B: mov     ecx, ebp
0x5E495D: call    sub_4849C0
0x5E4962: fstp    [esp+10h+arg_0]
0x5E4966: mov     eax, [esi+24h]
0x5E4969: mov     edx, [eax]
0x5E496B: lea     ecx, [esi+24h]
0x5E496E: push    ebx
0x5E496F: call    edx
0x5E4971: fstp    [esp+10h+var_4]
0x5E4975: fld     [esp+10h+arg_0]
0x5E4979: fld     [esp+10h+var_4]
0x5E497D: fcompp
0x5E497F: fnstsw  ax
0x5E4981: test    ah, 41h
0x5E4984: jnz     short loc_5E499C
0x5E4986: mov     ecx, ds:0B333C4h
0x5E498C: cmp     ebx, ecx
0x5E498E: jnz     short loc_5E49F6
0x5E4990: call    sub_663E80
0x5E4995: pop     esi
0x5E4996: pop     ebp
0x5E4997: pop     ebx
0x5E4998: pop     ecx
0x5E4999: retn    4
0x5E499C: mov     eax, [ebx+5Ch]
0x5E499F: mov     edx, [eax+1Ch]
0x5E49A2: push    edi
0x5E49A3: push    0
0x5E49A5: lea     edi, [esi+18h]
0x5E49A8: push    0
0x5E49AA: lea     esi, [ebx+5Ch]
0x5E49AD: push    0
0x5E49AF: push    edi
0x5E49B0: mov     ecx, esi
0x5E49B2: call    edx
0x5E49B4: test    al, al
0x5E49B6: jz      short loc_5E49E2
0x5E49B8: mov     eax, [ebp+0]
0x5E49BB: mov     eax, [eax]
0x5E49BD: push    eax; int
0x5E49BE: lea     ecx, [ebx+44h]; this
0x5E49C1: call    ExtraDataList_GetContainerChanges
0x5E49C6: fld     [esp+14h+arg_4]
0x5E49CA: fsub    dword ptr [esp+14h]
0x5E49CE: push    eax; int
0x5E49CF: push    ecx
0x5E49D0: mov     ecx, ebp
0x5E49D2: fstp    [esp+1Ch+arg_4]
0x5E49D6: fld     [esp+1Ch+arg_4]
0x5E49DA: fstp    [esp+1Ch+var_1C]; float
0x5E49DD: call    sub_488AA0
0x5E49E2: mov     edx, [esi]
0x5E49E4: mov     eax, [edx+34h]
0x5E49E7: push    edi
0x5E49E8: mov     ecx, esi
0x5E49EA: call    eax
0x5E49EC: push    0
0x5E49EE: mov     ecx, esi
0x5E49F0: call    MagicCaster_UseActiveMagicItem
0x5E49F5: pop     edi
0x5E49F6: pop     esi
0x5E49F7: pop     ebp
0x5E49F8: pop     ebx
0x5E49F9: pop     ecx
0x5E49FA: retn    4
