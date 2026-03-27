0x7422A0: push    0FFFFFFFFh
0x7422A2: push    offset SEH_8C8970
0x7422A7: mov     eax, large fs:0
0x7422AD: push    eax
0x7422AE: push    ecx
0x7422AF: push    esi
0x7422B0: push    edi
0x7422B1: mov     eax, ds:0B30AACh
0x7422B6: xor     eax, esp
0x7422B8: push    eax
0x7422B9: lea     eax, [esp+1Ch+var_C]
0x7422BD: mov     large fs:0, eax
0x7422C3: mov     edi, ecx
0x7422C5: push    108h; Size
0x7422CA: call    FormHeapAlloc
0x7422CF: mov     esi, eax
0x7422D1: add     esp, 4
0x7422D4: mov     [esp+1Ch+var_10], esi
0x7422D8: test    esi, esi
0x7422DA: mov     [esp+1Ch+var_4], 0
0x7422E2: jz      short loc_7422F3
0x7422E4: mov     ecx, esi; this
0x7422E6: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x7422EB: mov     dword ptr [esi], offset ??_7NiAmbientLight@@6B@; const NiAmbientLight::`vftable'
0x7422F1: jmp     short loc_7422F5
0x7422F3: xor     esi, esi
0x7422F5: mov     eax, [esp+1Ch+arg_0]
0x7422F9: push    eax
0x7422FA: push    esi
0x7422FB: mov     ecx, edi
0x7422FD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x742305: call    sub_71A5A0
0x74230A: mov     eax, esi
0x74230C: mov     ecx, [esp+1Ch+var_C]
0x742310: mov     large fs:0, ecx
0x742317: pop     ecx
0x742318: pop     edi
0x742319: pop     esi
0x74231A: add     esp, 10h
0x74231D: retn    4
