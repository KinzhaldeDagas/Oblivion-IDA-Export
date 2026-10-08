0x7098B0: push    0FFFFFFFFh; Pass223: Default NiMaterialProperty producer for global 0x00B3FAA4, consumed by NiPropertyState slot 2.
0x7098B2: push    offset SEH_8C8970
0x7098B7: mov     eax, large fs:0
0x7098BD: push    eax
0x7098BE: push    ecx
0x7098BF: push    esi
0x7098C0: push    edi
0x7098C1: mov     eax, ds:0B30AACh
0x7098C6: xor     eax, esp
0x7098C8: push    eax
0x7098C9: lea     eax, [esp+1Ch+var_C]
0x7098CD: mov     large fs:0, eax
0x7098D3: push    5Ch ; '\'; Size
0x7098D5: call    FormHeapAlloc
0x7098DA: add     esp, 4
0x7098DD: mov     [esp+1Ch+var_10], eax
0x7098E1: test    eax, eax
0x7098E3: mov     [esp+1Ch+var_4], 0
0x7098EB: jz      short loc_7098F8
0x7098ED: mov     ecx, eax; this
0x7098EF: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x7098F4: mov     esi, eax
0x7098F6: jmp     short loc_7098FA
0x7098F8: xor     esi, esi
0x7098FA: mov     eax, ds:0B3FAA4h
0x7098FF: cmp     eax, esi
0x709901: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x709909: jz      short loc_709941
0x70990B: test    eax, eax
0x70990D: jz      short loc_70992D
0x70990F: mov     edi, eax
0x709911: add     eax, 4
0x709914: push    eax; lpAddend
0x709915: call    dword ptr ds:0A2807Ch
0x70991B: test    eax, eax
0x70991D: jnz     short loc_70992D
0x70991F: test    edi, edi
0x709921: jz      short loc_70992D
0x709923: mov     eax, [edi]
0x709925: mov     edx, [eax]
0x709927: push    1
0x709929: mov     ecx, edi
0x70992B: call    edx
0x70992D: test    esi, esi
0x70992F: mov     ds:0B3FAA4h, esi
0x709935: jz      short loc_709941
0x709937: add     esi, 4
0x70993A: push    esi; lpAddend
0x70993B: call    dword ptr ds:0A28078h
0x709941: mov     ecx, dword ptr [esp+1Ch+var_C]
0x709945: mov     large fs:0, ecx
0x70994C: pop     ecx
0x70994D: pop     edi
0x70994E: pop     esi
0x70994F: add     esp, 10h
0x709952: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
