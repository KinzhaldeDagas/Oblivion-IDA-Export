0x444840: sub     esp, 18h
0x444843: push    ebx
0x444844: push    ebp
0x444845: push    esi
0x444846: mov     ebx, ecx
0x444848: push    edi
0x444849: push    1; ArgList
0x44484B: mov     [esp+2Ch+var_10], ebx
0x44484F: mov     byte ptr [ebx+51h], 1
0x444853: call    sub_65D810
0x444858: push    offset aRunningCellTes; "Running Cell Test"
0x44485D: call    sub_40FEC0
0x444862: add     esp, 8
0x444865: call    CloseAllMenus
0x44486A: call    dword ptr ds:0A280D0h
0x444870: mov     ebp, eax
0x444872: mov     eax, ds:0B33A98h
0x444877: add     eax, 0Ch
0x44487A: mov     [esp+28h+var_C], ebp
0x44487E: mov     [esp+28h+var_18], eax
0x444882: jz      loc_4449BC
0x444888: jmp     short loc_444894
0x44488A: align 10h
0x444890: mov     eax, [esp+28h+var_18]
0x444894: cmp     dword ptr [eax+4], 0
0x444898: jnz     short loc_4448A3
0x44489A: cmp     dword ptr [eax], 0
0x44489D: jz      loc_4449B8
0x4448A3: mov     esi, [eax]
0x4448A5: test    esi, esi
0x4448A7: jz      loc_4449A9
0x4448AD: push    esi
0x4448AE: mov     ecx, ebx
0x4448B0: call    sub_4431F0
0x4448B5: fld     dword ptr [esi+98h]
0x4448BB: call    Double_To_SInt32
0x4448C0: fld     dword ptr [esi+9Ch]
0x4448C6: mov     ebp, eax
0x4448C8: sar     ebp, 0Ch
0x4448CB: call    Double_To_SInt32
0x4448D0: fld     dword ptr [esi+0A0h]
0x4448D6: sar     eax, 0Ch
0x4448D9: mov     [esp+28h+var_14], eax
0x4448DD: call    Double_To_SInt32
0x4448E2: fld     dword ptr [esi+0A4h]
0x4448E8: mov     edi, eax
0x4448EA: sar     edi, 0Ch
0x4448ED: mov     [esp+28h+var_4], edi
0x4448F1: call    Double_To_SInt32
0x4448F6: mov     ebx, eax
0x4448F8: mov     eax, [esi+1Ch]
0x4448FB: sar     ebx, 0Ch
0x4448FE: test    eax, eax
0x444900: jnz     short loc_44490B
0x444902: mov     eax, offset EmptyString
0x444907: test    eax, eax
0x444909: jz      short loc_444923
0x44490B: mov     ecx, eax
0x44490D: lea     edx, [ecx+1]
0x444910: mov     [esp+28h+var_8], edx
0x444914: mov     dl, [ecx]
0x444916: add     ecx, 1
0x444919: test    dl, dl
0x44491B: jnz     short loc_444914
0x44491D: sub     ecx, [esp+28h+var_8]
0x444921: jnz     short loc_44492F
0x444923: mov     eax, [esi]
0x444925: mov     edx, [eax+0D4h]
0x44492B: mov     ecx, esi
0x44492D: call    edx
0x44492F: mov     ecx, [esp+28h+var_14]
0x444933: mov     edx, [esi+0Ch]
0x444936: push    ebx
0x444937: push    edi
0x444938: push    ecx
0x444939: push    ebp
0x44493A: push    eax
0x44493B: push    edx; ArgList
0x44493C: push    offset aStartingWorld0; "Starting world %08X %s with bounds (%i,"...
0x444941: call    sub_40FEC0
0x444946: add     esp, 1Ch
0x444949: cmp     ebp, edi
0x44494B: jge     short loc_4449A1
0x44494D: mov     eax, ds:0B06A2Ch
0x444952: mov     edi, [esp+28h+var_14]
0x444956: cmp     edi, ebx
0x444958: jge     short loc_444999
0x44495A: lea     ebx, [ebx+0]
0x444960: push    edi; signed int
0x444961: push    ebp; signed int
0x444962: mov     ecx, esi; this
0x444964: call    TESWorldSpace__GetCellAtCellCoord
0x444969: test    eax, eax
0x44496B: jnz     short loc_44497A
0x44496D: push    edi; int
0x44496E: push    ebp; ArgList
0x44496F: mov     ecx, esi
0x444971: call    sub_4F1630
0x444976: test    eax, eax
0x444978: jz      short loc_44498E
0x44497A: mov     ecx, [esp+28h+var_C]
0x44497E: mov     edx, [esp+28h+arg_0]
0x444982: push    ecx
0x444983: mov     ecx, [esp+2Ch+var_10]
0x444987: push    edx
0x444988: push    eax
0x444989: call    sub_4433A0
0x44498E: mov     eax, ds:0B06A2Ch
0x444993: add     edi, eax
0x444995: cmp     edi, ebx
0x444997: jl      short loc_444960
0x444999: add     ebp, eax
0x44499B: cmp     ebp, [esp+28h+var_4]
0x44499F: jl      short loc_444952
0x4449A1: mov     eax, [esp+28h+var_18]
0x4449A5: mov     ebx, [esp+28h+var_10]
0x4449A9: mov     eax, [eax+4]
0x4449AC: test    eax, eax
0x4449AE: mov     [esp+28h+var_18], eax
0x4449B2: jnz     loc_444890
0x4449B8: mov     ebp, [esp+28h+var_C]
0x4449BC: mov     ecx, ds:0B33A98h
0x4449C2: call    sub_447580
0x4449C7: mov     ecx, ds:0B33A98h; this
0x4449CD: call    Actor__GetTemplateForm; This is also called with DataHandler
0x4449D2: mov     edi, eax
0x4449D4: xor     esi, esi
0x4449D6: test    edi, edi
0x4449D8: jbe     short loc_444A01
0x4449DA: lea     ebx, [ebx+0]
0x4449E0: mov     ecx, ds:0B33A98h
0x4449E6: push    esi
0x4449E7: call    sub_447560
0x4449EC: mov     ecx, [esp+28h+arg_0]
0x4449F0: push    ebp
0x4449F1: push    ecx
0x4449F2: push    eax
0x4449F3: mov     ecx, ebx
0x4449F5: call    sub_4433A0
0x4449FA: add     esi, 1
0x4449FD: cmp     esi, edi
0x4449FF: jb      short loc_4449E0
0x444A01: pop     edi
0x444A02: pop     esi
0x444A03: pop     ebp
0x444A04: mov     byte ptr [ebx+52h], 0
0x444A08: pop     ebx
0x444A09: add     esp, 18h
0x444A0C: retn    4
