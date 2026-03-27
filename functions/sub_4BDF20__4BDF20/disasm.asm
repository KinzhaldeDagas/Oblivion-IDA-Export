0x4BDF20: push    0FFFFFFFFh
0x4BDF22: push    offset SEH_6E3250
0x4BDF27: mov     eax, large fs:0
0x4BDF2D: push    eax
0x4BDF2E: push    esi
0x4BDF2F: push    edi
0x4BDF30: mov     eax, ds:0B30AACh
0x4BDF35: xor     eax, esp
0x4BDF37: push    eax
0x4BDF38: lea     eax, [esp+18h+var_C]
0x4BDF3C: mov     large fs:0, eax
0x4BDF42: mov     esi, [esp+18h+arg_0]
0x4BDF46: test    esi, esi
0x4BDF48: jz      loc_4BE018
0x4BDF4E: cmp     dword ptr [esi+0Ch], 0
0x4BDF52: jnz     short loc_4BDFD0
0x4BDF54: mov     eax, [esi+4]
0x4BDF57: mov     ecx, [esi]
0x4BDF59: push    eax; int
0x4BDF5A: push    ecx; ArgList
0x4BDF5B: mov     ecx, [esi+8]
0x4BDF5E: call    sub_4F1630
0x4BDF63: test    eax, eax
0x4BDF65: mov     [esi+0Ch], eax
0x4BDF68: jnz     short loc_4BDFD0
0x4BDF6A: push    58h ; 'X'; Size
0x4BDF6C: call    FormHeapAlloc
0x4BDF71: add     esp, 4
0x4BDF74: mov     [esp+18h+arg_0], eax
0x4BDF78: test    eax, eax
0x4BDF7A: mov     [esp+18h+var_4], 0
0x4BDF82: jz      short loc_4BDF8D
0x4BDF84: mov     ecx, eax
0x4BDF86: call    TESObjectCELL_constr
0x4BDF8B: jmp     short loc_4BDF8F
0x4BDF8D: xor     eax, eax
0x4BDF8F: push    1
0x4BDF91: mov     ecx, eax
0x4BDF93: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BDF9B: mov     [esi+0Ch], eax
0x4BDF9E: call    sub_4C9F90
0x4BDFA3: mov     ecx, [esi+0Ch]
0x4BDFA6: push    0
0x4BDFA8: call    TESObjectCELL__SetIsInterior
0x4BDFAD: mov     ecx, [esi+0Ch]
0x4BDFB0: call    sub_4CA710
0x4BDFB5: mov     edx, [esi+4]
0x4BDFB8: mov     eax, [esi]
0x4BDFBA: mov     ecx, [esi+0Ch]
0x4BDFBD: push    edx
0x4BDFBE: push    eax
0x4BDFBF: call    sub_4C9AC0
0x4BDFC4: mov     ecx, [esi+0Ch]
0x4BDFC7: push    ecx
0x4BDFC8: mov     ecx, [esi+8]
0x4BDFCB: call    sub_4EFEF0
0x4BDFD0: mov     ecx, [esi+0Ch]
0x4BDFD3: call    sub_4D58B0
0x4BDFD8: mov     ecx, [esi+0Ch]; this
0x4BDFDB: call    sub_4CE3C0
0x4BDFE0: mov     edi, eax
0x4BDFE2: test    edi, edi
0x4BDFE4: jz      short loc_4BE001
0x4BDFE6: push    1; char
0x4BDFE8: mov     ecx, edi; int
0x4BDFEA: call    sub_4C79A0
0x4BDFEF: mov     edx, ds:0B333A0h
0x4BDFF5: movzx   eax, byte ptr [edx+53h]
0x4BDFF9: push    eax
0x4BDFFA: mov     ecx, edi
0x4BDFFC: call    sub_4C5BA0
0x4BE001: mov     ecx, [esi+0Ch]
0x4BE004: call    sub_4AF170
0x4BE009: test    eax, eax
0x4BE00B: jz      short loc_4BE014
0x4BE00D: mov     ecx, eax
0x4BE00F: call    sub_4E7610
0x4BE014: mov     byte ptr [esi+10h], 1
0x4BE018: mov     ecx, [esp+18h+var_C]
0x4BE01C: mov     large fs:0, ecx
0x4BE023: pop     ecx
0x4BE024: pop     edi
0x4BE025: pop     esi
0x4BE026: add     esp, 0Ch
0x4BE029: retn    4
