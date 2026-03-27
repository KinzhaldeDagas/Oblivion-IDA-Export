0x606960: push    0FFFFFFFFh
0x606962: push    offset SEH_625D80
0x606967: mov     eax, large fs:0
0x60696D: push    eax
0x60696E: push    ecx
0x60696F: push    ebp
0x606970: push    esi
0x606971: push    edi
0x606972: mov     eax, ds:0B30AACh
0x606977: xor     eax, esp
0x606979: push    eax
0x60697A: lea     eax, [esp+20h+var_C]
0x60697E: mov     large fs:0, eax
0x606984: mov     edi, ecx
0x606986: mov     [esp+20h+var_10], edi
0x60698A: mov     dword ptr [edi], offset ??_7AlarmPackage@@6B@; const AlarmPackage::`vftable'
0x606990: mov     eax, ds:0B33A98h
0x606995: cmp     byte ptr [eax+0CD4h], 0
0x60699C: mov     [esp+20h+var_4], 0
0x6069A4: jnz     short loc_6069B1
0x6069A6: push    edi
0x6069A7: mov     ecx, offset ActorProcessManager_ptr
0x6069AC: call    sub_675090
0x6069B1: mov     esi, [edi+3Ch]
0x6069B4: cmp     dword ptr [esi+4], 0
0x6069B8: jz      short loc_6069D6
0x6069BA: lea     ebx, [ebx+0]
0x6069C0: mov     eax, [esi+4]
0x6069C3: mov     ebp, [eax+4]
0x6069C6: push    eax
0x6069C7: call    FormHeapFree
0x6069CC: add     esp, 4
0x6069CF: test    ebp, ebp
0x6069D1: mov     [esi+4], ebp
0x6069D4: jnz     short loc_6069C0
0x6069D6: mov     dword ptr [esi], 0
0x6069DC: mov     eax, [edi+3Ch]
0x6069DF: push    eax
0x6069E0: call    FormHeapFree
0x6069E5: add     esp, 4
0x6069E8: mov     ecx, edi; this
0x6069EA: mov     dword ptr [edi+3Ch], 0
0x6069F1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6069F9: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x6069FE: mov     ecx, [esp+20h+var_C]
0x606A02: mov     large fs:0, ecx
0x606A09: pop     ecx
0x606A0A: pop     edi
0x606A0B: pop     esi
0x606A0C: pop     ebp
0x606A0D: add     esp, 10h
0x606A10: retn
