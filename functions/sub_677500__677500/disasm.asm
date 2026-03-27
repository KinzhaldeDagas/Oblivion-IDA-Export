0x677500: sub     esp, 0Ch
0x677503: push    esi
0x677504: mov     esi, ecx
0x677506: fld     dword ptr [esi+0ACh]
0x67750C: mov     [esp+10h+var_C], esi
0x677510: fsub    [esp+10h+arg_0]
0x677514: fstp    [esp+10h+arg_0]
0x677518: fld     [esp+10h+arg_0]
0x67751C: fst     dword ptr [esi+0ACh]
0x677522: fldz
0x677524: fcompp
0x677526: fnstsw  ax
0x677528: test    ah, 1
0x67752B: jnz     loc_677756
0x677531: push    ebx
0x677532: push    ebp
0x677533: xor     ebx, ebx
0x677535: push    edi
0x677536: lea     ecx, [esi+68h]; this
0x677539: mov     [esp+1Ch+arg_0], 0
0x677541: mov     [esp+1Ch+var_8], ebx
0x677545: mov     [esp+1Ch+var_4], ebx
0x677549: call    sub_7616D0
0x67754E: mov     ebp, eax
0x677550: test    ebp, ebp
0x677552: jz      loc_67763B
0x677558: cmp     dword ptr [ebp+4], 0
0x67755C: jnz     short loc_677568
0x67755E: cmp     dword ptr [ebp+0], 0
0x677562: jz      loc_67763B
0x677568: mov     esi, [ebp+0]
0x67756B: test    esi, esi
0x67756D: jz      loc_67762C
0x677573: mov     eax, [esi]
0x677575: mov     edx, [eax+190h]
0x67757B: mov     ecx, esi
0x67757D: call    edx
0x67757F: test    al, al
0x677581: jz      loc_67762C
0x677587: mov     ecx, esi; this
0x677589: add     ebx, 1
0x67758C: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x677591: cmp     eax, 2
0x677594: jnz     loc_67762C
0x67759A: mov     edi, [esi+58h]
0x67759D: test    edi, edi
0x67759F: jz      loc_67762C
0x6775A5: mov     eax, [edi]
0x6775A7: mov     edx, [eax+8]
0x6775AA: mov     ecx, edi
0x6775AC: call    edx
0x6775AE: test    eax, eax
0x6775B0: jnz     short loc_67762C
0x6775B2: mov     eax, [edi]
0x6775B4: mov     edx, [eax+47Ch]
0x6775BA: mov     ecx, edi
0x6775BC: call    edx
0x6775BE: test    eax, eax
0x6775C0: jnz     short loc_67762C
0x6775C2: mov     eax, [esi]
0x6775C4: mov     edx, [eax+78h]
0x6775C7: mov     ecx, esi
0x6775C9: call    edx
0x6775CB: test    al, al
0x6775CD: jnz     short loc_67762C
0x6775CF: mov     ecx, esi
0x6775D1: call    sub_4D9040
0x6775D6: test    al, al
0x6775D8: jnz     short loc_67762C
0x6775DA: push    0; unk
0x6775DC: mov     ecx, esi; this
0x6775DE: call    TESObjectREFR_IsDead
0x6775E3: test    al, al
0x6775E5: jnz     short loc_67762C
0x6775E7: mov     eax, [edi]
0x6775E9: mov     edx, [eax+360h]
0x6775EF: mov     ecx, edi
0x6775F1: call    edx
0x6775F3: fcomp   dword ptr ds:0A2FAA8h
0x6775F9: fnstsw  ax
0x6775FB: test    ah, 5
0x6775FE: jp      short loc_67762C
0x677600: mov     ecx, esi
0x677602: call    sub_4D79A0
0x677607: test    eax, eax
0x677609: jz      short loc_67761D
0x67760B: mov     ecx, esi
0x67760D: call    sub_4D79A0
0x677612: mov     ecx, eax
0x677614: call    BSSimpleList_IsEmpty
0x677619: test    al, al
0x67761B: jz      short loc_67762C
0x67761D: add     [esp+1Ch+arg_0], 1
0x677622: push    esi
0x677623: lea     ecx, [esp+20h+var_8]
0x677627: call    BSSimpleList_PushBack
0x67762C: mov     ebp, [ebp+4]
0x67762F: test    ebp, ebp
0x677631: mov     esi, [esp+1Ch+var_C]
0x677635: jnz     loc_677558
0x67763B: cmp     ebx, 19h
0x67763E: mov     al, ds:0B333B8h
0x677643: jnb     short loc_67766D
0x677645: xor     al, al
0x677647: fld     dword ptr ds:0B37D40h
0x67764D: test    al, al
0x67764F: fstp    [esp+1Ch+var_C]
0x677653: fld     [esp+1Ch+var_C]
0x677657: fstp    dword ptr [esi+0ACh]
0x67765D: jz      short loc_677679
0x67765F: mov     edi, ds:0B37D60h
0x677665: mov     ecx, ds:0B37D68h
0x67766B: jmp     short loc_677685
0x67766D: test    al, al
0x67766F: jz      short loc_677647
0x677671: fld     dword ptr ds:0B37D58h
0x677677: jmp     short loc_67764D
0x677679: mov     edi, ds:0B37D48h
0x67767F: mov     ecx, ds:0B37D50h
0x677685: mov     ebp, [esp+1Ch+arg_0]
0x677689: cmp     ebp, edi
0x67768B: jb      loc_67774A
0x677691: cmp     ebx, ecx
0x677693: jb      loc_67774A
0x677699: test    al, al
0x67769B: jz      short loc_6776E4
0x67769D: lea     esi, [esp+1Ch+var_8]
0x6776A1: cmp     dword ptr [esi+4], 0
0x6776A5: jnz     short loc_6776B0
0x6776A7: cmp     dword ptr [esi], 0
0x6776AA: jz      loc_67774A
0x6776B0: cmp     ebp, edi
0x6776B2: jb      loc_67774A
0x6776B8: mov     eax, [esi]
0x6776BA: test    eax, eax
0x6776BC: jz      short loc_6776CA
0x6776BE: mov     ecx, [eax+58h]
0x6776C1: push    eax
0x6776C2: call    sub_6331C0
0x6776C7: sub     ebp, 1
0x6776CA: mov     esi, [esi+4]
0x6776CD: test    esi, esi
0x6776CF: jnz     short loc_6776A1
0x6776D1: lea     ecx, [esp+1Ch+var_8]
0x6776D5: call    BSSimpleList_Clear
0x6776DA: pop     edi
0x6776DB: pop     ebp
0x6776DC: pop     ebx
0x6776DD: pop     esi
0x6776DE: add     esp, 0Ch
0x6776E1: retn    4
0x6776E4: fld     dword ptr ds:0A32048h
0x6776EA: xor     ebp, ebp
0x6776EC: fstp    [esp+1Ch+arg_0]
0x6776F0: lea     edi, [esp+1Ch+var_8]
0x6776F4: cmp     dword ptr [edi+4], 0
0x6776F8: jnz     short loc_6776FF
0x6776FA: cmp     dword ptr [edi], 0
0x6776FD: jz      short loc_67773D
0x6776FF: mov     esi, [edi]
0x677701: test    esi, esi
0x677703: jz      short loc_677736
0x677705: test    ebp, ebp
0x677707: jz      short loc_677723
0x677709: mov     ecx, [esi+58h]
0x67770C: mov     eax, [ecx]
0x67770E: mov     edx, [eax+360h]
0x677714: call    edx
0x677716: fld     [esp+1Ch+arg_0]
0x67771A: fcompp
0x67771C: fnstsw  ax
0x67771E: test    ah, 41h
0x677721: jnz     short loc_677736
0x677723: mov     ecx, [esi+58h]
0x677726: mov     eax, [ecx]
0x677728: mov     edx, [eax+360h]
0x67772E: mov     ebp, esi
0x677730: call    edx
0x677732: fstp    [esp+1Ch+arg_0]
0x677736: mov     edi, [edi+4]
0x677739: test    edi, edi
0x67773B: jnz     short loc_6776F4
0x67773D: test    ebp, ebp
0x67773F: jz      short loc_67774A
0x677741: mov     ecx, [ebp+58h]
0x677744: push    ebp
0x677745: call    sub_6331C0
0x67774A: lea     ecx, [esp+1Ch+var_8]
0x67774E: call    BSSimpleList_Clear
0x677753: pop     edi
0x677754: pop     ebp
0x677755: pop     ebx
0x677756: pop     esi
0x677757: add     esp, 0Ch
0x67775A: retn    4
