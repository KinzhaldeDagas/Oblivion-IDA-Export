0x9991F6: mov     eax, [ebp-0Ch]
0x9991F9: cmp     eax, [ebp+0Ch]
0x9991FC: jz      short loc_999205
0x9991FE: push    eax; Memory
0x9991FF: call    _free
0x999204: pop     ecx
0x999205: mov     eax, [ebp-14h]
0x999208: cmp     eax, 0FFFFFFFEh
0x99920B: jnz     loc_99938E
0x999211: mov     eax, [ebp-10h]
0x999214: jmp     loc_99938E
0x999219: add     eax, eax
0x99921B: mov     [ebp-10h], eax
0x99921E: jmp     short __read_nolock___$error_return$25326
0x999220: test    edi, edi
0x999222: jz      short loc_999232
0x999224: mov     ecx, [ebp-0Ch]
0x999227: cmp     word ptr [ecx], 0Ah
0x99922B: jnz     short loc_999232
0x99922D: or      byte ptr [eax], 4
0x999230: jmp     short loc_999235
0x999232: and     byte ptr [eax], 0FBh
0x999235: mov     edi, [ebp-0Ch]
0x999238: mov     eax, [ebp-10h]
0x99923B: add     eax, edi
0x99923D: cmp     edi, eax
0x99923F: mov     [ebp+10h], edi
0x999242: mov     [ebp-10h], eax
0x999245: jnb     loc_99934B
0x99924B: mov     eax, [ebp+10h]
0x99924E: movzx   ecx, word ptr [eax]
0x999251: cmp     cx, 1Ah
0x999255: jz      loc_999333
0x99925B: cmp     cx, 0Dh
0x99925F: jz      short loc_999270
0x999261: mov     [edi], cx
0x999264: inc     edi
0x999265: inc     edi
0x999266: inc     eax
0x999267: inc     eax
0x999268: mov     [ebp+10h], eax
0x99926B: jmp     loc_999325
0x999270: mov     ecx, [ebp-10h]
0x999273: add     ecx, 0FFFFFFFEh
0x999276: cmp     eax, ecx
0x999278: jnb     short loc_99929B
0x99927A: lea     ecx, [eax+2]
0x99927D: cmp     word ptr [ecx], 0Ah
0x999281: jnz     short loc_999293
0x999283: add     eax, 4
0x999286: mov     [ebp+10h], eax
0x999289: mov     word ptr [edi], 0Ah
0x99928E: jmp     loc_999323
0x999293: mov     [ebp+10h], ecx
0x999296: jmp     loc_99931E
0x99929B: add     dword ptr [ebp+10h], 2
0x99929F: push    0; lpOverlapped
0x9992A1: lea     eax, [ebp-18h]
0x9992A4: push    eax; lpNumberOfBytesRead
0x9992A5: push    2; nNumberOfBytesToRead
0x9992A7: lea     eax, [ebp-8]
0x9992AA: push    eax; lpBuffer
0x9992AB: mov     eax, [ebx]
0x9992AD: push    dword ptr [esi+eax]; hFile
0x9992B0: call    ds:ReadFile
0x9992B6: test    eax, eax
0x9992B8: jnz     short loc_9992C4
0x9992BA: call    ds:GetLastError
0x9992C0: test    eax, eax
0x9992C2: jnz     short loc_99931E
0x9992C4: cmp     dword ptr [ebp-18h], 0
0x9992C8: jz      short loc_99931E
0x9992CA: mov     eax, [ebx]
0x9992CC: test    byte ptr [esi+eax+4], 48h
0x9992D1: jz      short loc_9992FA
0x9992D3: cmp     word ptr [ebp-8], 0Ah
0x9992D8: jz      short loc_999289
0x9992DA: mov     word ptr [edi], 0Dh
0x9992DF: mov     eax, [ebx]
0x9992E1: mov     cl, [ebp-8]
0x9992E4: mov     [esi+eax+5], cl
0x9992E8: mov     eax, [ebx]
0x9992EA: mov     cl, [ebp-7]
0x9992ED: mov     [esi+eax+25h], cl
0x9992F1: mov     eax, [ebx]
0x9992F3: mov     byte ptr [esi+eax+26h], 0Ah
0x9992F8: jmp     short loc_999323
0x9992FA: cmp     edi, [ebp-0Ch]
0x9992FD: jnz     short loc_999306
0x9992FF: cmp     word ptr [ebp-8], 0Ah
0x999304: jz      short loc_999289
0x999306: push    1; dwMoveMethod
0x999308: push    0FFFFFFFFh; int
0x99930A: push    0FFFFFFFEh; int
0x99930C: push    dword ptr [ebp+8]; int
0x99930F: call    __lseeki64_nolock
0x999314: add     esp, 10h
0x999317: cmp     word ptr [ebp-8], 0Ah
0x99931C: jz      short loc_999325
0x99931E: mov     word ptr [edi], 0Dh
0x999323: inc     edi
0x999324: inc     edi
0x999325: mov     eax, [ebp-10h]
0x999328: cmp     [ebp+10h], eax
0x99932B: jb      loc_99924B
0x999331: jmp     short loc_99934B
0x999333: mov     ecx, [ebx]
0x999335: lea     esi, [esi+ecx+4]
0x999339: test    byte ptr [esi], 40h
0x99933C: jnz     short loc_999343
0x99933E: or      byte ptr [esi], 2
0x999341: jmp     short loc_99934B
0x999343: mov     ax, [eax]
0x999346: mov     [edi], ax
0x999349: inc     edi
0x99934A: inc     edi
0x99934B: sub     edi, [ebp-0Ch]
0x99934E: mov     [ebp-10h], edi
0x999351: jmp     __read_nolock___$error_return$25326
0x999356: call    ds:GetLastError
0x99935C: push    5
0x99935E: pop     esi
0x99935F: cmp     eax, esi
0x999361: jnz     short loc_99937A
0x999363: call    __errno
0x999368: mov     dword ptr [eax], 9
0x99936E: call    ___doserrno
0x999373: mov     [eax], esi
0x999375: jmp     loc_9991F2
0x99937A: cmp     eax, 6Dh ; 'm'
0x99937D: jnz     loc_9991EB
0x999383: and     dword ptr [ebp-14h], 0
0x999387: jmp     __read_nolock___$error_return$25326
0x99938C: xor     eax, eax
0x99938E: pop     ebx
0x99938F: pop     edi
0x999390: pop     esi
0x999391: leave
0x999392: retn
