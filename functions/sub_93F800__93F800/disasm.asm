0x93F800: push    ebp
0x93F801: mov     ebp, esp
0x93F803: and     esp, 0FFFFFFF0h
0x93F806: sub     esp, 1F4h
0x93F80C: mov     eax, ds:0B30AACh
0x93F811: mov     ecx, ds:0BA9DE4h
0x93F817: push    ebx
0x93F818: mov     ebx, large fs:2Ch
0x93F81F: mov     [esp+1F8h+var_4], eax
0x93F826: mov     eax, [ebx+ecx*4]
0x93F829: mov     edx, [eax+1A4h]
0x93F82F: push    esi
0x93F830: cmp     edx, [eax+1A8h]
0x93F836: push    edi
0x93F837: jnb     short loc_93F85D
0x93F839: mov     esi, eax
0x93F83B: mov     ecx, [esi+1A4h]
0x93F841: mov     dword ptr [ecx], offset aTtgsk; "TtGsk"
0x93F847: rdtsc
0x93F849: mov     [esp+200h+var_1E8], eax
0x93F84D: mov     eax, [esp+200h+var_1E8]
0x93F851: mov     [ecx+4], eax
0x93F854: add     ecx, 0Ch
0x93F857: mov     [esi+1A4h], ecx
0x93F85D: mov     ecx, [ebp+arg_4]
0x93F860: mov     esi, [ecx]
0x93F862: mov     eax, [ebp+arg_0]
0x93F865: mov     ecx, [ecx+8]
0x93F868: mov     edx, [eax+8]
0x93F86B: mov     edi, [eax]
0x93F86D: push    ecx
0x93F86E: push    edx
0x93F86F: lea     ecx, [esp+208h+var_1D0]
0x93F873: call    sub_8B1FF0
0x93F878: mov     eax, [esi]
0x93F87A: mov     ecx, esi
0x93F87C: call    dword ptr [eax+8]
0x93F87F: cmp     eax, 6
0x93F882: jnz     short loc_93F899
0x93F884: lea     ecx, [esp+200h+var_1D0]
0x93F888: push    ecx
0x93F889: push    esi
0x93F88A: push    edi
0x93F88B: lea     ecx, [esp+20Ch+var_10]
0x93F892: call    sub_93EF30
0x93F897: jmp     short loc_93F8AC
0x93F899: lea     edx, [esp+200h+var_1D0]
0x93F89D: push    edx
0x93F89E: push    esi
0x93F89F: push    edi
0x93F8A0: lea     ecx, [esp+20Ch+var_10]
0x93F8A7: call    sub_93EE40
0x93F8AC: mov     eax, [esp+200h+var_8]
0x93F8B3: movsx   ecx, al
0x93F8B6: movsx   eax, ah
0x93F8B9: mov     [esp+200h+var_18C], eax
0x93F8BD: mov     ax, word ptr [esp+200h+var_8+2]
0x93F8C5: movsx   edx, al
0x93F8C8: movsx   eax, ah
0x93F8CB: mov     [esp+200h+var_184], eax
0x93F8CF: lea     eax, [esp+200h+var_170]
0x93F8D6: push    eax
0x93F8D7: mov     [esp+204h+var_190], ecx
0x93F8DB: push    ecx
0x93F8DC: lea     ecx, [esp+208h+var_10]
0x93F8E3: mov     [esp+208h+var_180], 1
0x93F8EB: mov     [esp+208h+var_188], edx
0x93F8F2: mov     [esp+208h+var_17C], 0
0x93F8FD: mov     edx, [edi]
0x93F8FF: push    ecx
0x93F900: mov     ecx, edi
0x93F902: call    dword ptr [edx+28h]
0x93F905: mov     ecx, [esp+200h+var_18C]
0x93F909: mov     edx, [esi]
0x93F90B: lea     eax, [esp+200h+var_B0]
0x93F912: push    eax
0x93F913: mov     eax, [esp+204h+var_190]
0x93F917: push    ecx
0x93F918: lea     ecx, [esp+eax*2+208h+var_10]
0x93F91F: push    ecx
0x93F920: mov     ecx, esi
0x93F922: call    dword ptr [edx+28h]
0x93F925: lea     edx, [esp+200h+var_1E0]
0x93F929: push    edx
0x93F92A: lea     eax, [esp+204h+var_1D0]
0x93F92E: push    eax
0x93F92F: push    esi
0x93F930: push    edi
0x93F931: lea     ecx, [esp+210h+var_190]
0x93F938: call    sub_93C690
0x93F93D: mov     edx, ds:0BA9DE4h
0x93F943: mov     [esp+200h+var_1E4], eax
0x93F947: mov     eax, [ebx+edx*4]
0x93F94A: mov     ecx, [eax+1A4h]
0x93F950: cmp     ecx, [eax+1A8h]
0x93F956: jnb     short loc_93F97C
0x93F958: mov     ecx, eax
0x93F95A: mov     ebx, [ecx+1A4h]
0x93F960: mov     dword ptr [ebx], offset aEt; "Et"
0x93F966: rdtsc
0x93F968: mov     [esp+200h+var_1E8], eax
0x93F96C: mov     edx, [esp+200h+var_1E8]
0x93F970: mov     [ebx+4], edx
0x93F973: add     ebx, 0Ch
0x93F976: mov     [ecx+1A4h], ebx
0x93F97C: mov     eax, [esp+200h+var_1E4]
0x93F980: test    eax, eax
0x93F982: jnz     short loc_93F99B
0x93F984: fld     [esp+200h+var_1D4]
0x93F988: fsub    dword ptr [edi+0Ch]
0x93F98B: fsub    dword ptr [esi+0Ch]
0x93F98E: fcomp   dword ptr ds:0A2FAA8h
0x93F994: fnstsw  ax
0x93F996: test    ah, 5
0x93F999: jp      short loc_93F9AB
0x93F99B: mov     edx, [ebp+arg_4]
0x93F99E: mov     ecx, [ebp+arg_C]
0x93F9A1: mov     eax, [ecx]
0x93F9A3: push    edx
0x93F9A4: mov     edx, [ebp+arg_0]
0x93F9A7: push    edx
0x93F9A8: call    dword ptr [eax+4]
0x93F9AB: mov     ecx, [esp+200h+var_4]
0x93F9B2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x93F9B7: pop     edi
0x93F9B8: pop     esi
0x93F9B9: pop     ebx
0x93F9BA: mov     esp, ebp
0x93F9BC: pop     ebp
0x93F9BD: retn
