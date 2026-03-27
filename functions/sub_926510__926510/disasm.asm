0x926510: push    ecx
0x926511: mov     edx, ds:0BA9DE4h
0x926517: push    ebx
0x926518: push    ebp
0x926519: mov     ebx, ecx
0x92651B: mov     ecx, large fs:2Ch
0x926522: mov     eax, [ecx+edx*4]
0x926525: push    esi
0x926526: mov     esi, [eax+1A4h]
0x92652C: push    edi
0x92652D: cmp     esi, [eax+1A8h]
0x926533: jnb     short loc_926559
0x926535: mov     esi, eax
0x926537: mov     ecx, [esi+1A4h]
0x92653D: mov     dword ptr [ecx], offset aTtgetnextjob; "TtGetNextJob"
0x926543: rdtsc
0x926545: mov     [esp+14h+var_4], eax
0x926549: mov     eax, [esp+14h+var_4]
0x92654D: mov     [ecx+4], eax
0x926550: add     ecx, 0Ch
0x926553: mov     [esi+1A4h], ecx
0x926559: mov     ecx, ebx; lpCriticalSection
0x92655B: call    sub_8A7720
0x926560: mov     edi, [esp+14h+arg_0]
0x926564: mov     esi, [esp+14h+arg_8]
0x926568: lea     ecx, [edi+edi*4]
0x92656B: lea     ebp, [ebx+ecx*4+40h]
0x92656F: push    esi
0x926570: mov     ecx, ebp
0x926572: call    sub_9263E0
0x926577: mov     eax, [esp+14h+arg_4]
0x92657B: cmp     edi, eax
0x92657D: jz      short loc_926592
0x92657F: lea     edx, [eax+eax*4]
0x926582: mov     eax, [ebx+edx*4+48h]
0x926586: test    eax, eax
0x926588: lea     ecx, [ebx+edx*4]
0x92658B: jz      short loc_926592
0x92658D: add     ecx, 40h ; '@'
0x926590: jmp     short loc_926594
0x926592: mov     ecx, ebp
0x926594: mov     eax, [ecx]
0x926596: mov     edx, [ecx+0Ch]
0x926599: lea     eax, [eax+eax*2]
0x92659C: lea     eax, [edx+eax*4]
0x92659F: movzx   edx, byte ptr [eax]
0x9265A2: test    edx, edx
0x9265A4: jz      loc_92666F
0x9265AA: cmp     edx, 6
0x9265AD: jz      short loc_9265D8
0x9265AF: mov     edx, [eax]
0x9265B1: mov     [esi], edx
0x9265B3: mov     edx, [eax+4]
0x9265B6: mov     [esi+4], edx
0x9265B9: mov     eax, [eax+8]
0x9265BC: mov     [esi+8], eax
0x9265BF: mov     esi, [ecx]
0x9265C1: mov     edx, [ecx+10h]
0x9265C4: inc     esi
0x9265C5: mov     eax, esi
0x9265C7: cmp     eax, edx
0x9265C9: mov     [ecx], esi
0x9265CB: jnz     short loc_9265D3
0x9265CD: mov     dword ptr [ecx], 0
0x9265D3: dec     dword ptr [ecx+8]
0x9265D6: jmp     short loc_92661E
0x9265D8: mov     edx, eax
0x9265DA: mov     ebp, [edx]
0x9265DC: mov     edi, esi
0x9265DE: mov     [edi], ebp
0x9265E0: mov     ebp, [edx+4]
0x9265E3: mov     [edi+4], ebp
0x9265E6: mov     edx, [edx+8]
0x9265E9: mov     [edi+8], edx
0x9265EC: mov     edx, [eax+8]
0x9265EF: mov     edi, 4
0x9265F4: cmp     edx, edi
0x9265F6: jle     short loc_9265BF
0x9265F8: mov     ecx, [eax+4]
0x9265FB: add     edx, 0FFFFFFFCh
0x9265FE: add     ecx, edi
0x926600: mov     [eax+8], edx
0x926603: mov     [eax+4], ecx
0x926606: mov     [esi+8], edi
0x926609: mov     eax, [ebx+6Ch]
0x92660C: test    eax, eax
0x92660E: jz      short loc_92661E
0x926610: dec     eax
0x926611: push    1; lReleaseCount
0x926613: lea     ecx, [ebx+70h]
0x926616: mov     [ebx+6Ch], eax
0x926619: call    ReleaseSemaphore_0
0x92661E: push    ebx; lpCriticalSection
0x92661F: call    dword ptr ds:0A28074h
0x926625: mov     ecx, large fs:2Ch
0x92662C: mov     edx, ds:0BA9DE4h
0x926632: mov     eax, [ecx+edx*4]
0x926635: mov     esi, [eax+1A4h]
0x92663B: cmp     esi, [eax+1A8h]
0x926641: jnb     short loc_926667
0x926643: mov     esi, eax
0x926645: mov     ecx, [esi+1A4h]
0x92664B: mov     dword ptr [ecx], offset aEt; "Et"
0x926651: rdtsc
0x926653: mov     [esp+14h+arg_0], eax
0x926657: mov     eax, [esp+14h+arg_0]
0x92665B: mov     [ecx+4], eax
0x92665E: add     ecx, 0Ch
0x926661: mov     [esi+1A4h], ecx
0x926667: pop     edi
0x926668: pop     esi
0x926669: pop     ebp
0x92666A: pop     ebx
0x92666B: pop     ecx
0x92666C: retn    0Ch
0x92666F: mov     edx, [eax]
0x926671: mov     [esi], edx
0x926673: mov     edx, [eax+4]
0x926676: mov     [esi+4], edx
0x926679: mov     edx, [eax+4]
0x92667C: cmp     edx, 1
0x92667F: jle     loc_9265BF
0x926685: inc     word ptr [eax+2]
0x926689: dec     edx
0x92668A: mov     [eax+4], edx
0x92668D: mov     dword ptr [esi+4], 1
0x926694: jmp     loc_926609
