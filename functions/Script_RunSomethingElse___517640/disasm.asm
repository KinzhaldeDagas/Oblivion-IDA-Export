0x517640: push    0FFFFFFFFh
0x517642: push    offset Script_RunSomethingElse??_SEH
0x517647: mov     eax, large fs:0
0x51764D: push    eax
0x51764E: sub     esp, 730h
0x517654: mov     eax, ds:0B30AACh
0x517659: xor     eax, esp
0x51765B: mov     [esp+73Ch+var_10], eax
0x517662: push    ebx
0x517663: push    ebp
0x517664: push    esi
0x517665: push    edi
0x517666: mov     eax, ds:0B30AACh
0x51766B: xor     eax, esp
0x51766D: push    eax
0x51766E: lea     eax, [esp+750h+var_C]
0x517675: mov     large fs:0, eax
0x51767B: mov     edi, [esp+750h+a5]
0x517682: mov     ebx, [esp+750h+arg_4]
0x517689: xor     ebp, ebp
0x51768B: cmp     edi, ebp
0x51768D: mov     esi, ecx
0x51768F: mov     [esp+750h+var_724], ebx
0x517693: jz      short loc_5176CE
0x517695: mov     eax, [edi+8]
0x517698: shr     eax, 3
0x51769B: test    al, 1
0x51769D: jz      short loc_5176CE
0x51769F: cmp     [esi+14h], ebp
0x5176A2: jz      short loc_5176FA
0x5176A4: mov     edx, [edi]
0x5176A6: mov     eax, [edx+0D4h]
0x5176AC: mov     esi, [esi+14h]
0x5176AF: mov     ecx, edi
0x5176B1: call    eax
0x5176B3: mov     edx, [esi]
0x5176B5: push    eax
0x5176B6: mov     eax, [edx+0D4h]
0x5176BC: mov     ecx, esi
0x5176BE: call    eax
0x5176C0: push    eax; ArgList
0x5176C1: push    offset aNestedCallToSc; "Nested call to ScriptRunner::Run.  Scri"...
0x5176C6: call    PrintError
0x5176CB: add     esp, 0Ch
0x5176CE: xor     al, al
0x5176D0: mov     ecx, [esp+750h+var_C]
0x5176D7: mov     large fs:0, ecx
0x5176DE: pop     ecx
0x5176DF: pop     edi
0x5176E0: pop     esi
0x5176E1: pop     ebp
0x5176E2: pop     ebx
0x5176E3: mov     ecx, [esp+73Ch+var_10]
0x5176EA: xor     ecx, esp
0x5176EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5176F1: add     esp, 73Ch
0x5176F7: retn    0Ch
0x5176FA: lea     ecx, [esp+750h+var_720]
0x5176FE: mov     [esi+14h], edi
0x517701: call    sub_4F32E0
0x517706: cmp     ebx, ebp
0x517708: mov     [esp+750h+var_4], ebp
0x51770F: mov     dword ptr [esp+750h+ArgList], 0FFFFh
0x517717: mov     [esp+750h+a7], ebp
0x51771B: jz      short loc_51772E
0x51771D: mov     edx, [ebx]
0x51771F: mov     eax, [edx+170h]
0x517725: mov     ecx, ebx
0x517727: call    eax
0x517729: mov     [esi+4], eax
0x51772C: jmp     short loc_517731
0x51772E: mov     [esi+4], ebp
0x517731: mov     ecx, [esp+750h+arg_8]
0x517738: xor     ebx, ebx
0x51773A: mov     [esi+8], ecx
0x51773D: cmp     [edi+20h], ebp
0x517740: mov     [esp+750h+a9], ebp
0x517744: mov     [esp+750h+a10], ebx
0x517748: mov     [esp+750h+a11], ebp
0x51774C: jbe     loc_5177E6
0x517752: jmp     short loc_517756
0x517754: xor     ebp, ebp
0x517756: add     [esp+750h+a11], 1
0x51775B: cmp     ebx, ebp
0x51775D: setnz   dl
0x517760: lea     eax, [esp+750h+a9]
0x517764: lea     ecx, [esp+750h+a8]
0x517768: mov     [esi+10h], ebp
0x51776B: mov     [esp+750h+a8], ebp
0x51776F: push    edx; a10
0x517770: push    eax; a9
0x517771: push    ecx; a8
0x517772: lea     edx, [esp+75Ch+a7]
0x517776: push    edx; a7
0x517777: lea     eax, [esp+760h+ArgList]
0x51777B: push    eax; a6
0x51777C: push    edi; a5
0x51777D: mov     ecx, esi; this
0x51777F: call    sub_516830
0x517784: test    al, al
0x517786: jz      short loc_517804
0x517788: cmp     ebx, ebp
0x51778A: mov     ebp, [esp+750h+a7]
0x51778E: jz      short loc_517799
0x517790: sub     ebx, 1
0x517793: mov     [esp+750h+a10], ebx
0x517797: jmp     short loc_5177D3
0x517799: mov     eax, [esp+750h+a9]
0x51779D: test    eax, eax
0x51779F: jnz     short loc_5177A9
0x5177A1: mov     eax, [esp+750h+var_724]
0x5177A5: mov     [esp+750h+a9], eax
0x5177A9: mov     ecx, [esp+750h+a11]
0x5177AD: push    1; a13
0x5177AF: push    0; a12
0x5177B1: push    ecx; a11
0x5177B2: lea     edx, [esp+75Ch+a10]
0x5177B6: push    edx; a10
0x5177B7: mov     edx, dword ptr [esp+760h+ArgList]
0x5177BB: push    ebp; a9
0x5177BC: lea     ecx, [esp+764h+a8]
0x5177C0: push    ecx; a8
0x5177C1: push    eax; a4
0x5177C2: push    edx; ArgList
0x5177C3: push    edi; a5
0x5177C4: mov     ecx, esi; a1
0x5177C6: call    CommandInfo_Execute?
0x5177CB: test    al, al
0x5177CD: jz      short loc_5177E4
0x5177CF: mov     ebx, [esp+750h+a10]
0x5177D3: add     ebp, [esp+750h+a8]
0x5177D7: cmp     ebp, [edi+20h]
0x5177DA: mov     [esp+750h+a7], ebp
0x5177DE: jb      loc_517754
0x5177E4: xor     ebp, ebp
0x5177E6: lea     ecx, [esp+750h+var_720]; void *
0x5177EA: mov     [esi+14h], ebp
0x5177ED: mov     [esp+750h+var_4], 0FFFFFFFFh
0x5177F8: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5177FD: mov     al, 1
0x5177FF: jmp     loc_5176D0
0x517804: mov     [edi+20h], ebp
0x517807: jmp     short loc_5177E6
