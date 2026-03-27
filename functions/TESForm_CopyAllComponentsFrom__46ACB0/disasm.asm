0x46ACB0: push    0FFFFFFFFh
0x46ACB2: push    offset TESForm_CopyAllComponentsFrom_SEH
0x46ACB7: mov     eax, large fs:0
0x46ACBD: push    eax
0x46ACBE: sub     esp, 0D0h
0x46ACC4: push    esi
0x46ACC5: mov     eax, ds:0B30AACh
0x46ACCA: xor     eax, esp
0x46ACCC: push    eax
0x46ACCD: lea     eax, [esp+0E4h+var_C]
0x46ACD4: mov     large fs:0, eax
0x46ACDA: mov     esi, ecx
0x46ACDC: lea     ecx, [esp+0E4h+var_74]
0x46ACE0: call    FormComponentList_ZeroInit
0x46ACE5: lea     ecx, [esp+0E4h+var_DC]
0x46ACE9: mov     [esp+0E4h+var_4], 0
0x46ACF4: call    FormComponentList_ZeroInit
0x46ACF9: push    esi
0x46ACFA: lea     ecx, [esp+0E8h+var_74]
0x46ACFE: mov     byte ptr [esp+0E8h+var_4], 1
0x46AD06: call    FormComponentList_Build
0x46AD0B: mov     eax, [esp+0E4h+arg_0]
0x46AD12: push    eax
0x46AD13: lea     ecx, [esp+0E8h+var_DC]
0x46AD17: call    FormComponentList_Build
0x46AD1C: lea     ecx, [esp+0E4h+var_DC]
0x46AD20: push    ecx
0x46AD21: lea     ecx, [esp+0E8h+var_74]
0x46AD25: call    FormComponentList_CopyFrom
0x46AD2A: lea     ecx, [esp+0E4h+var_DC]; void *
0x46AD2E: mov     byte ptr [esp+0E4h+var_4], 0
0x46AD36: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x46AD3B: lea     ecx, [esp+0E4h+var_74]; void *
0x46AD3F: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x46AD4A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x46AD4F: mov     ecx, [esp+0E4h+var_C]
0x46AD56: mov     large fs:0, ecx
0x46AD5D: pop     ecx
0x46AD5E: pop     esi
0x46AD5F: add     esp, 0DCh
0x46AD65: retn    4
