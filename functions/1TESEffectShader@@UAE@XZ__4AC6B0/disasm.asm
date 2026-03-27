0x4AC6B0: push    0FFFFFFFFh
0x4AC6B2: push    offset ??1TESEffectShader@@UAE@XZ_SEH
0x4AC6B7: mov     eax, large fs:0
0x4AC6BD: push    eax
0x4AC6BE: push    ecx
0x4AC6BF: push    esi
0x4AC6C0: mov     eax, ds:0B30AACh
0x4AC6C5: xor     eax, esp
0x4AC6C7: push    eax
0x4AC6C8: lea     eax, [esp+18h+var_C]
0x4AC6CC: mov     large fs:0, eax
0x4AC6D2: mov     esi, ecx
0x4AC6D4: mov     [esp+18h+var_10], esi
0x4AC6D8: mov     dword ptr [esi], offset ??_7TESEffectShader@@6B@; const TESEffectShader::`vftable'
0x4AC6DE: mov     [esp+18h+var_4], 2
0x4AC6E6: call    j_TESForm_ClearComponentReferences
0x4AC6EB: lea     ecx, [esi+104h]; void *
0x4AC6F1: mov     byte ptr [esp+18h+var_4], 1
0x4AC6F6: call    TESTexture_destr
0x4AC6FB: lea     ecx, [esi+0F8h]; void *
0x4AC701: mov     byte ptr [esp+18h+var_4], 0
0x4AC706: call    TESTexture_destr
0x4AC70B: mov     ecx, esi; this
0x4AC70D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4AC715: call    TESForm_destr
0x4AC71A: mov     ecx, [esp+18h+var_C]
0x4AC71E: mov     large fs:0, ecx
0x4AC725: pop     ecx
0x4AC726: pop     esi
0x4AC727: add     esp, 10h
0x4AC72A: retn
