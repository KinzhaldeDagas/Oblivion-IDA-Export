0x7E5C30: push    0FFFFFFFFh
0x7E5C32: push    offset SEH_7B2A00
0x7E5C37: mov     eax, large fs:0
0x7E5C3D: push    eax
0x7E5C3E: push    esi
0x7E5C3F: push    edi
0x7E5C40: mov     eax, ds:0B30AACh
0x7E5C45: xor     eax, esp
0x7E5C47: push    eax
0x7E5C48: lea     eax, [esp+18h+var_C]
0x7E5C4C: mov     large fs:0, eax
0x7E5C52: mov     esi, ecx
0x7E5C54: lea     edi, [esi+110h]
0x7E5C5A: mov     ecx, edi; this
0x7E5C5C: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x7E5C61: mov     eax, [esi+70h]
0x7E5C64: sub     eax, 0
0x7E5C67: jz      short loc_7E5CD1
0x7E5C69: sub     eax, 1
0x7E5C6C: jz      short loc_7E5CC3
0x7E5C6E: sub     eax, 1
0x7E5C71: jnz     short loc_7E5CDD
0x7E5C73: mov     esi, [esp+18h+element]
0x7E5C77: test    esi, esi
0x7E5C79: mov     [esp+18h+element], esi
0x7E5C7D: jz      short loc_7E5C89
0x7E5C7F: lea     eax, [esi+4]
0x7E5C82: push    eax; lpAddend
0x7E5C83: call    dword ptr ds:0A28078h
0x7E5C89: lea     ecx, [esp+18h+element]
0x7E5C8D: push    ecx; element
0x7E5C8E: mov     ecx, edi; self
0x7E5C90: mov     [esp+1Ch+var_4], 0
0x7E5C98: call    NiTObjectArray_AddFirstEmpty
0x7E5C9D: test    esi, esi
0x7E5C9F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7E5CA7: jz      short loc_7E5CDD
0x7E5CA9: lea     edx, [esi+4]
0x7E5CAC: push    edx; lpAddend
0x7E5CAD: call    dword ptr ds:0A2807Ch
0x7E5CB3: test    eax, eax
0x7E5CB5: jnz     short loc_7E5CDD
0x7E5CB7: mov     eax, [esi]
0x7E5CB9: mov     edx, [eax]
0x7E5CBB: push    1
0x7E5CBD: mov     ecx, esi
0x7E5CBF: call    edx
0x7E5CC1: jmp     short loc_7E5CDD
0x7E5CC3: mov     eax, [esp+18h+element]
0x7E5CC7: push    eax
0x7E5CC8: mov     ecx, esi
0x7E5CCA: call    sub_7E5B50
0x7E5CCF: jmp     short loc_7E5CDD
0x7E5CD1: mov     ecx, [esp+18h+element]
0x7E5CD5: push    ecx
0x7E5CD6: mov     ecx, esi
0x7E5CD8: call    sub_7E59C0
0x7E5CDD: mov     ecx, edi
0x7E5CDF: call    sub_4784A0
0x7E5CE4: mov     ecx, [esp+18h+var_C]
0x7E5CE8: mov     large fs:0, ecx
0x7E5CEF: pop     ecx
0x7E5CF0: pop     edi
0x7E5CF1: pop     esi
0x7E5CF2: add     esp, 0Ch
0x7E5CF5: retn    4
0x9C9BA0: lea     ecx, [ebp+4]; slot
0x9C9BA3: jmp     NiPointerSlot_Release
0x9C9BA8: mov     edx, [esp+arg_4]
0x9C9BAC: lea     eax, [edx-8]
0x9C9BAF: mov     ecx, [edx-0Ch]
0x9C9BB2: xor     ecx, eax
0x9C9BB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9BB9: mov     eax, offset stru_AF23BC
0x9C9BBE: jmp     ___CxxFrameHandler3
