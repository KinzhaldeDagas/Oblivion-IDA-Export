0x72F8A0: push    0FFFFFFFFh
0x72F8A2: push    offset ??0TextureEffectData@BSShaderPPLightingProperty@@QAE@XZ_SEH
0x72F8A7: mov     eax, large fs:0
0x72F8AD: push    eax
0x72F8AE: push    ecx
0x72F8AF: push    ebx
0x72F8B0: push    esi
0x72F8B1: push    edi
0x72F8B2: mov     eax, ds:0B30AACh
0x72F8B7: xor     eax, esp
0x72F8B9: push    eax
0x72F8BA: lea     eax, [esp+20h+var_C]
0x72F8BE: mov     large fs:0, eax
0x72F8C4: mov     ebx, ecx
0x72F8C6: mov     [esp+20h+var_10], ebx
0x72F8CA: call    NiObject_constr
0x72F8CF: xor     eax, eax
0x72F8D1: mov     dword ptr [ebx], offset ??_7NiSkinData@@6B@; const NiSkinData::`vftable'
0x72F8D7: mov     [esp+20h+var_4], eax
0x72F8DB: mov     [ebx+8], eax
0x72F8DE: mov     esi, [esp+20h+arg_8]
0x72F8E2: mov     edx, [esp+20h+arg_C]
0x72F8E6: mov     eax, [esp+20h+arg_0]
0x72F8EA: lea     edi, [ebx+0Ch]
0x72F8ED: mov     ecx, 0Dh
0x72F8F2: rep movsd
0x72F8F4: mov     ecx, [esp+20h+arg_4]
0x72F8F8: mov     [ebx+44h], ecx
0x72F8FB: push    edx
0x72F8FC: mov     ecx, ebx
0x72F8FE: mov     byte ptr [esp+24h+var_4], 1
0x72F903: mov     [ebx+40h], eax
0x72F906: call    sub_72F2F0
0x72F90B: mov     eax, ebx
0x72F90D: mov     ecx, [esp+20h+var_C]
0x72F911: mov     large fs:0, ecx
0x72F918: pop     ecx
0x72F919: pop     edi
0x72F91A: pop     esi
0x72F91B: pop     ebx
0x72F91C: add     esp, 10h
0x72F91F: retn    10h
