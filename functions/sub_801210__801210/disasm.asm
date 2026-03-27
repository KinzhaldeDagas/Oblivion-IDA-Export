0x801210: push    edi
0x801211: mov     edi, [esp+4+arg_0]
0x801215: test    edi, edi
0x801217: jz      loc_8012B9
0x80121D: cmp     [esp+4+arg_4], 0
0x801222: jz      loc_8012B9
0x801228: mov     eax, [esp+4+arg_8]
0x80122C: test    eax, eax
0x80122E: jz      loc_8012B9
0x801234: cmp     byte ptr ds:0B42D80h, 0
0x80123B: mov     ecx, offset CacheOrNullString
0x801240: jnz     short loc_801247
0x801242: mov     ecx, offset FullPath
0x801247: push    esi
0x801248: mov     esi, edi
0x80124A: sub     esi, ecx
0x80124C: lea     esp, [esp+0]
0x801250: mov     dl, [ecx]
0x801252: mov     [esi+ecx], dl
0x801255: add     ecx, 1
0x801258: test    dl, dl
0x80125A: jnz     short loc_801250
0x80125C: cmp     ds:0B43070h, dl
0x801262: jz      short loc_80128B
0x801264: mov     ecx, edi
0x801266: add     ecx, 0FFFFFFFFh
0x801269: lea     esp, [esp+0]
0x801270: mov     dl, [ecx+1]
0x801273: add     ecx, 1
0x801276: test    dl, dl
0x801278: jnz     short loc_801270
0x80127A: mov     edx, ds:0A93478h
0x801280: mov     [ecx], edx
0x801282: mov     dl, ds:0A9347Ch
0x801288: mov     [ecx+4], dl
0x80128B: mov     ecx, eax
0x80128D: lea     ecx, [ecx+0]
0x801290: mov     dl, [eax]
0x801292: add     eax, 1
0x801295: test    dl, dl
0x801297: jnz     short loc_801290
0x801299: sub     eax, ecx
0x80129B: mov     esi, ecx
0x80129D: add     edi, 0FFFFFFFFh
0x8012A0: mov     cl, [edi+1]
0x8012A3: add     edi, 1
0x8012A6: test    cl, cl
0x8012A8: jnz     short loc_8012A0
0x8012AA: mov     ecx, eax
0x8012AC: shr     ecx, 2
0x8012AF: rep movsd
0x8012B1: mov     ecx, eax
0x8012B3: and     ecx, 3
0x8012B6: rep movsb
0x8012B8: pop     esi
0x8012B9: pop     edi
0x8012BA: retn
