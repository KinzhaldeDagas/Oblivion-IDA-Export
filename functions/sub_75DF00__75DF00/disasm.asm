0x75DF00: push    esi
0x75DF01: mov     esi, [esp+4+arg_0]
0x75DF05: push    edi
0x75DF06: push    esi
0x75DF07: call    sub_75A0E0
0x75DF0C: mov     eax, ds:0B41C4Ch
0x75DF11: push    eax; ArgList
0x75DF12: call    TESOutput_PrintString
0x75DF17: movzx   edi, word ptr [esi+0Ah]
0x75DF1B: movzx   ecx, word ptr [esi+8]
0x75DF1F: add     esp, 4
0x75DF22: cmp     edi, ecx
0x75DF24: mov     [esp+8+arg_0], eax
0x75DF28: jb      short loc_75DF38
0x75DF2A: movzx   edx, word ptr [esi+0Eh]
0x75DF2E: add     edx, edi
0x75DF30: push    edx
0x75DF31: mov     ecx, esi
0x75DF33: call    NiTArray_SetSize
0x75DF38: lea     eax, [esp+8+arg_0]
0x75DF3C: push    eax
0x75DF3D: push    edi
0x75DF3E: mov     ecx, esi
0x75DF40: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75DF45: pop     edi
0x75DF46: pop     esi
0x75DF47: retn    4
