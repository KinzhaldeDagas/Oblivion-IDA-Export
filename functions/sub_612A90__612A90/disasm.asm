0x612A90: sub     esp, 10h
0x612A93: push    edi
0x612A94: mov     edi, [esp+14h+arg_4]
0x612A98: test    edi, edi
0x612A9A: jnz     short loc_612AA3
0x612A9C: fldz
0x612A9E: pop     edi
0x612A9F: add     esp, 10h
0x612AA2: retn
0x612AA3: push    ebx
0x612AA4: push    ebp
0x612AA5: push    esi
0x612AA6: mov     esi, [esp+20h+arg_0]
0x612AAA: xor     ebp, ebp
0x612AAC: push    ebp; a2
0x612AAD: mov     ecx, esi; this
0x612AAF: call    Actor_GetActorBaseForm
0x612AB4: test    eax, eax
0x612AB6: jz      short loc_612ABD
0x612AB8: add     eax, 44h ; 'D'
0x612ABB: jmp     short loc_612ABF
0x612ABD: xor     eax, eax
0x612ABF: push    eax
0x612AC0: push    esi; a1
0x612AC1: call    ContainerExtraData_GetContainerExtraDataForRef
0x612AC6: add     esp, 8
0x612AC9: test    eax, eax
0x612ACB: jz      short loc_612B11
0x612ACD: lea     ecx, [esp+20h+var_10]
0x612AD1: push    ecx
0x612AD2: push    28h ; '('
0x612AD4: mov     ecx, eax
0x612AD6: mov     dword ptr [esp+28h+var_10], ebp
0x612ADA: call    sub_486240
0x612ADF: push    0; int
0x612AE1: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x612AE6: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x612AEB: push    0; int
0x612AED: push    eax; void *
0x612AEE: call    OblivionDynamicCast
0x612AF3: mov     esi, eax
0x612AF5: add     esp, 14h
0x612AF8: test    esi, esi
0x612AFA: jz      short loc_612B11
0x612AFC: cmp     dword ptr [esp+20h+var_10], ebp
0x612B00: jle     short loc_612B11
0x612B02: lea     ecx, [esi+30h]
0x612B05: call    EffectItemList_AllEffectsHostile
0x612B0A: test    al, al
0x612B0C: jz      short loc_612B11
0x612B0E: lea     ebp, [esi+24h]
0x612B11: mov     eax, [edi+8]
0x612B14: push    0; int
0x612B16: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x612B1B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x612B20: push    0; int
0x612B22: push    eax; void *
0x612B23: call    OblivionDynamicCast
0x612B28: add     esp, 14h
0x612B2B: push    1
0x612B2D: mov     ecx, edi
0x612B2F: mov     ebx, eax
0x612B31: call    ContainerEntryExtraData_GetHealth
0x612B36: fdiv    qword ptr ds:0A309F0h
0x612B3C: test    ebx, ebx
0x612B3E: fstp    dword ptr [esp+20h+var_10+4]
0x612B42: jz      short loc_612B50
0x612B44: lea     eax, [ebx+60h]
0x612B47: test    eax, eax
0x612B49: jz      short loc_612B50
0x612B4B: mov     edi, [eax+4]
0x612B4E: jmp     short loc_612B52
0x612B50: xor     edi, edi
0x612B52: test    edi, edi
0x612B54: jz      short loc_612BA8
0x612B56: mov     ecx, [esp+20h+arg_4]
0x612B5A: call    sub_4849C0
0x612B5F: fstp    [esp+20h+var_8]
0x612B63: mov     edx, [edi+24h]
0x612B66: mov     eax, [edx]
0x612B68: lea     esi, [edi+24h]
0x612B6B: push    0
0x612B6D: mov     ecx, esi
0x612B6F: call    eax
0x612B71: fcomp   [esp+20h+var_8]
0x612B75: fnstsw  ax
0x612B77: test    ah, 41h
0x612B7A: jz      short loc_612BA8
0x612B7C: test    ebp, ebp
0x612B7E: jz      short loc_612BA5
0x612B80: mov     edx, [ebp+0Ch]
0x612B83: mov     eax, [edx]
0x612B85: lea     ecx, [ebp+0Ch]
0x612B88: push    0
0x612B8A: call    eax
0x612B8C: fstp    [esp+20h+var_8]
0x612B90: mov     edx, [esi]
0x612B92: mov     eax, [edx]
0x612B94: push    0
0x612B96: mov     ecx, esi
0x612B98: call    eax
0x612B9A: fcomp   [esp+20h+var_8]
0x612B9E: fnstsw  ax
0x612BA0: test    ah, 5
0x612BA3: jnp     short loc_612BA8
0x612BA5: lea     ebp, [edi+18h]
0x612BA8: fld     dword ptr [esp+20h+var_10+4]
0x612BAC: push    ebp; int
0x612BAD: push    ecx
0x612BAE: mov     ecx, [esp+28h+arg_0]
0x612BB2: fstp    [esp+28h+var_28]; float
0x612BB5: push    ebx; int
0x612BB6: push    ecx; int
0x612BB7: call    sub_612560
0x612BBC: add     esp, 10h
0x612BBF: pop     esi
0x612BC0: pop     ebp
0x612BC1: pop     ebx
0x612BC2: pop     edi
0x612BC3: add     esp, 10h
0x612BC6: retn
