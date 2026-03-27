0x4D4250: push    0FFFFFFFFh
0x4D4252: push    offset SEH_4D4250
0x4D4257: mov     eax, large fs:0
0x4D425D: push    eax
0x4D425E: push    ecx
0x4D425F: push    esi
0x4D4260: push    edi
0x4D4261: mov     eax, ds:0B30AACh
0x4D4266: xor     eax, esp
0x4D4268: push    eax
0x4D4269: lea     eax, [esp+1Ch+var_C]
0x4D426D: mov     large fs:0, eax
0x4D4273: mov     [esp+1Ch+var_10], 0
0x4D427B: mov     esi, [esp+1Ch+arg_0]
0x4D427F: mov     dword ptr [esi], 0
0x4D4285: test    byte ptr [ecx+24h], 1
0x4D4289: mov     [esp+1Ch+var_4], 0
0x4D4291: mov     [esp+1Ch+var_10], 1
0x4D4299: jz      short loc_4D42F1
0x4D429B: mov     eax, [esp+1Ch+arg_8]
0x4D429F: mov     edx, [esp+1Ch+arg_4]
0x4D42A3: push    eax
0x4D42A4: push    edx
0x4D42A5: lea     eax, [esp+24h+arg_8]
0x4D42A9: push    eax
0x4D42AA: call    sub_4D0C20
0x4D42AF: mov     ecx, [esp+1Ch+arg_8]; this
0x4D42B3: mov     [esp+1Ch+var_4], 1
0x4D42BB: call    BSRenderedTexture__GetInnerTexture
0x4D42C0: push    eax; a2
0x4D42C1: mov     ecx, esi; this
0x4D42C3: call    NiSmartPointer_Set??
0x4D42C8: mov     edi, [esp+1Ch+arg_8]
0x4D42CC: test    edi, edi
0x4D42CE: mov     byte ptr [esp+1Ch+var_4], 0
0x4D42D3: jz      short loc_4D42F1
0x4D42D5: lea     ecx, [edi+4]
0x4D42D8: push    ecx; lpAddend
0x4D42D9: call    dword ptr ds:0A2807Ch
0x4D42DF: test    eax, eax
0x4D42E1: jnz     short loc_4D42F1
0x4D42E3: test    edi, edi
0x4D42E5: jz      short loc_4D42F1
0x4D42E7: mov     edx, [edi]
0x4D42E9: mov     eax, [edx]
0x4D42EB: push    1
0x4D42ED: mov     ecx, edi
0x4D42EF: call    eax
0x4D42F1: mov     eax, esi
0x4D42F3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4D42F7: mov     large fs:0, ecx
0x4D42FE: pop     ecx
0x4D42FF: pop     edi
0x4D4300: pop     esi
0x4D4301: add     esp, 10h
0x4D4304: retn    0Ch
