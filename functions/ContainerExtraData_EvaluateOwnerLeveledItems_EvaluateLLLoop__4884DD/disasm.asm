0x4884DD: cmp     dword ptr [ebp+4], 0
0x4884E1: jnz     short loc_4884E9
0x4884E3: cmp     dword ptr [ebp+0], 0
0x4884E7: jz      short ContainerExtraData_EvaluateOwnerLeveledItems___Done
0x4884E9: mov     esi, [ebp+0]
0x4884EC: cmp     dword ptr [esi+4], 0
0x4884F0: jz      short ContainerExtraData_EvaluateOwnerLeveledItems___EvaluateLLLoop_next
0x4884F2: mov     ecx, [esi+4]
0x4884F5: cmp     byte ptr [ecx+4], 2Bh ; '+'
0x4884F9: jnz     short ContainerExtraData_EvaluateOwnerLeveledItems___EvaluateLLLoop_next
0x4884FB: mov     edi, ecx
0x4884FD: test    edi, edi
0x4884FF: jz      short ContainerExtraData_EvaluateOwnerLeveledItems___EvaluateLLLoop_next
0x488501: mov     ecx, [esp+arg_14]
0x488505: push    ebx
0x488506: call    ContainerExtraData_HasItemFromLevItem
0x48850B: test    al, al
0x48850D: jnz     short ContainerExtraData_EvaluateOwnerLeveledItems___IncLevItemIndex
0x48850F: lea     ecx, [esp+4+arg_14]
0x488513: call    TESContainer_constr
0x488518: mov     eax, [esi]
0x48851A: lea     edx, [esp+4+arg_14]
0x48851E: push    edx
0x48851F: cdq
0x488520: xor     eax, edx
0x488522: sub     eax, edx
0x488524: push    eax; int
0x488525: mov     eax, [esp+0Ch+arg_C]
0x488529: push    eax; int
0x48852A: lea     ecx, [edi+24h]; this
0x48852D: mov     [esp+10h+arg_2C], 0
0x488535: call    TESLeveledList_CalcLeveledForm
0x48853A: mov     ecx, [esp+8+arg_C]
0x48853E: push    ecx
0x48853F: push    ebx
0x488540: lea     ecx, [esp+24h]
0x488544: call    TESContainer_CopyContentsAsLevItem
0x488549: lea     ecx, [esp+10h+arg_8]
0x48854D: mov     dword ptr [esp+34h], 0FFFFFFFFh
0x488555: call    TESContainer_destr
