0x6C0680: push    0FFFFFFFFh
0x6C0682: push    offset SEH_6C2790
0x6C0687: mov     eax, large fs:0
0x6C068D: push    eax
0x6C068E: sub     esp, 14h
0x6C0691: push    ebx
0x6C0692: push    ebp
0x6C0693: push    esi
0x6C0694: push    edi
0x6C0695: mov     eax, ds:0B30AACh
0x6C069A: xor     eax, esp
0x6C069C: push    eax
0x6C069D: lea     eax, [esp+34h+var_C]
0x6C06A1: mov     large fs:0, eax
0x6C06A7: mov     edi, [esp+34h+arg_8]
0x6C06AB: fld     [esp+34h+arg_0]
0x6C06AF: mov     eax, [esp+34h+arg_4]
0x6C06B3: mov     edx, [edi]
0x6C06B5: mov     ebp, [eax]
0x6C06B7: push    4Ch ; 'L'; char
0x6C06B9: lea     ecx, [esp+38h+var_20]
0x6C06BD: push    ecx; int
0x6C06BE: push    edx; int
0x6C06BF: push    ebp; int
0x6C06C0: push    ecx
0x6C06C1: fstp    [esp+48h+var_48]; float
0x6C06C4: call    sub_6D31B0
0x6C06C9: add     esp, 14h
0x6C06CC: test    al, al
0x6C06CE: jz      loc_6C0809
0x6C06D4: mov     esi, [edi]
0x6C06D6: add     esi, 1
0x6C06D9: xor     ecx, ecx
0x6C06DB: mov     eax, esi
0x6C06DD: mov     edx, 4Ch ; 'L'
0x6C06E2: mul     edx
0x6C06E4: seto    cl
0x6C06E7: neg     ecx
0x6C06E9: or      ecx, eax
0x6C06EB: xor     eax, eax
0x6C06ED: add     ecx, 4
0x6C06F0: setb    al
0x6C06F3: neg     eax
0x6C06F5: or      eax, ecx
0x6C06F7: push    eax; Size
0x6C06F8: call    FormHeapAlloc
0x6C06FD: add     esp, 4
0x6C0700: mov     [esp+34h+var_1C], eax
0x6C0704: test    eax, eax
0x6C0706: mov     [esp+34h+var_4], 0
0x6C070E: jz      short loc_6C072C
0x6C0710: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C0715: push    offset sub_7616D0; a4
0x6C071A: push    esi; size
0x6C071B: lea     ebx, [eax+4]
0x6C071E: push    4Ch ; 'L'; a2
0x6C0720: push    ebx; a1
0x6C0721: mov     [eax], esi
0x6C0723: call    ArrayConstructor
0x6C0728: mov     esi, ebx
0x6C072A: jmp     short loc_6C072E
0x6C072C: xor     esi, esi
0x6C072E: mov     ecx, [esp+34h+var_20]
0x6C0732: imul    ecx, 4Ch ; 'L'
0x6C0735: push    ecx; Size
0x6C0736: push    ebp; Src
0x6C0737: push    esi; Dst
0x6C0738: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6C0740: call    _memcpy
0x6C0745: mov     eax, [edi]
0x6C0747: mov     edx, [esp+40h+var_20]
0x6C074B: add     esp, 0Ch
0x6C074E: cmp     eax, edx
0x6C0750: jbe     short loc_6C076E
0x6C0752: sub     eax, edx
0x6C0754: mov     ecx, edx
0x6C0756: imul    eax, 4Ch ; 'L'
0x6C0759: imul    ecx, 4Ch ; 'L'
0x6C075C: push    eax; Size
0x6C075D: lea     edx, [ecx+ebp]
0x6C0760: push    edx; Src
0x6C0761: lea     eax, [ecx+esi+4Ch]
0x6C0765: push    eax; Dst
0x6C0766: call    _memcpy
0x6C076B: add     esp, 0Ch
0x6C076E: mov     ecx, [edi]
0x6C0770: fld     [esp+34h+arg_0]
0x6C0774: push    4Ch ; 'L'; char
0x6C0776: push    ecx; int
0x6C0777: push    3; int
0x6C0779: push    ebp; int
0x6C077A: push    ecx
0x6C077B: lea     edx, [esp+48h+var_18]
0x6C077F: fstp    [esp+48h+var_48]; float
0x6C0782: push    edx; int
0x6C0783: call    sub_6BBDC0
0x6C0788: fld     [esp+4Ch+arg_0]
0x6C078C: mov     eax, [esp+4Ch+var_20]
0x6C0790: imul    eax, 4Ch ; 'L'
0x6C0793: fstp    dword ptr [eax+esi]
0x6C0796: fldz
0x6C0798: mov     ecx, [esp+4Ch+var_18]
0x6C079C: add     eax, esi
0x6C079E: mov     [eax+4], ecx
0x6C07A1: mov     edx, [esp+4Ch+var_14]
0x6C07A5: mov     [eax+8], edx
0x6C07A8: mov     ecx, [esp+4Ch+var_10]
0x6C07AC: mov     [eax+0Ch], ecx
0x6C07AF: fst     dword ptr [eax+10h]
0x6C07B2: add     esp, 18h
0x6C07B5: fst     dword ptr [eax+14h]
0x6C07B8: fstp    dword ptr [eax+18h]
0x6C07BB: add     dword ptr [edi], 1
0x6C07BE: test    ebp, ebp
0x6C07C0: jz      short loc_6C07DF
0x6C07C2: mov     edx, [ebp-4]
0x6C07C5: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C07CA: lea     ebx, [ebp-4]
0x6C07CD: push    edx; int
0x6C07CE: push    4Ch ; 'L'; unsigned int
0x6C07D0: push    ebp; void *
0x6C07D1: call    $LN21
0x6C07D6: push    ebx
0x6C07D7: call    FormHeapFree
0x6C07DC: add     esp, 4
0x6C07DF: mov     eax, [esp+34h+arg_4]
0x6C07E3: mov     [eax], esi
0x6C07E5: mov     ecx, [edi]
0x6C07E7: push    4Ch ; 'L'
0x6C07E9: push    ecx
0x6C07EA: push    esi
0x6C07EB: call    sub_6C0170
0x6C07F0: add     esp, 0Ch
0x6C07F3: mov     al, 1
0x6C07F5: mov     ecx, [esp+34h+var_C]
0x6C07F9: mov     large fs:0, ecx
0x6C0800: pop     ecx
0x6C0801: pop     edi
0x6C0802: pop     esi
0x6C0803: pop     ebp
0x6C0804: pop     ebx
0x6C0805: add     esp, 20h
0x6C0808: retn
0x6C0809: xor     al, al
0x6C080B: mov     ecx, [esp+34h+var_C]
0x6C080F: mov     large fs:0, ecx
0x6C0816: pop     ecx
0x6C0817: pop     edi
0x6C0818: pop     esi
0x6C0819: pop     ebp
0x6C081A: pop     ebx
0x6C081B: add     esp, 20h
0x6C081E: retn
