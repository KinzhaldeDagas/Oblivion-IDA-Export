0x68F2B0: push    0FFFFFFFFh
0x68F2B2: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x68F2B7: mov     eax, large fs:0
0x68F2BD: push    eax
0x68F2BE: push    ecx
0x68F2BF: push    esi
0x68F2C0: push    edi
0x68F2C1: mov     eax, ds:0B30AACh
0x68F2C6: xor     eax, esp
0x68F2C8: push    eax
0x68F2C9: lea     eax, [esp+1Ch+var_C]
0x68F2CD: mov     large fs:0, eax
0x68F2D3: mov     esi, ecx
0x68F2D5: mov     [esp+1Ch+var_10], esi
0x68F2D9: mov     edi, [esp+1Ch+arg_8]
0x68F2DD: mov     eax, [esp+1Ch+arg_4]
0x68F2E1: mov     ecx, [esp+1Ch+arg_0]
0x68F2E5: push    edi
0x68F2E6: push    eax
0x68F2E7: push    ecx
0x68F2E8: mov     ecx, esi; this
0x68F2EA: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x68F2EF: mov     dword ptr [esi], offset ??_7AssociatedItemEffect@@6B@; const AssociatedItemEffect::`vftable'
0x68F2F5: mov     edx, [edi+1Ch]
0x68F2F8: mov     eax, [edx+60h]
0x68F2FB: push    eax; a1
0x68F2FC: mov     [esp+20h+var_4], 0
0x68F304: call    TESForm_LookupByFormID
0x68F309: mov     [esi+38h], eax
0x68F30C: add     esp, 4
0x68F30F: mov     eax, esi
0x68F311: mov     ecx, [esp+1Ch+var_C]
0x68F315: mov     large fs:0, ecx
0x68F31C: pop     ecx
0x68F31D: pop     edi
0x68F31E: pop     esi
0x68F31F: add     esp, 10h
0x68F322: retn    0Ch
