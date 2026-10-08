0x7174B0: push    0FFFFFFFFh; Verified NiTriShape constructor wrapper: allocate/init NiTriShapeData from caller-supplied vertices, colors and triangle-index buffer; initialize NiTriBasedGeom and install NiTriShape vtable.
0x7174B2: push    offset SEH_8C62B0
0x7174B7: mov     eax, large fs:0
0x7174BD: push    eax
0x7174BE: push    ecx
0x7174BF: push    esi
0x7174C0: mov     eax, ds:0B30AACh
0x7174C5: xor     eax, esp
0x7174C7: push    eax
0x7174C8: lea     eax, [esp+18h+var_C]
0x7174CC: mov     large fs:0, eax
0x7174D2: mov     esi, ecx
0x7174D4: push    58h ; 'X'; Size
0x7174D6: call    FormHeapAlloc
0x7174DB: add     esp, 4
0x7174DE: mov     [esp+18h+var_10], eax
0x7174E2: test    eax, eax
0x7174E4: mov     [esp+18h+var_4], 0
0x7174EC: jz      short loc_717524
0x7174EE: mov     ecx, [esp+18h+triangleIndices]
0x7174F2: mov     edx, dword ptr [esp+18h+triangleCount]
0x7174F6: push    ecx
0x7174F7: mov     ecx, dword ptr [esp+1Ch+dataFlags]
0x7174FB: push    edx
0x7174FC: mov     edx, dword ptr [esp+20h+hasVertexColors]
0x717500: push    ecx
0x717501: mov     ecx, [esp+24h+textureCoordinates]
0x717505: push    edx
0x717506: mov     edx, [esp+28h+colors]
0x71750A: push    ecx
0x71750B: mov     ecx, [esp+2Ch+normals]
0x71750F: push    edx
0x717510: mov     edx, [esp+30h+vertices]
0x717514: push    ecx
0x717515: mov     ecx, dword ptr [esp+34h+vertexCount]
0x717519: push    edx
0x71751A: push    ecx
0x71751B: mov     ecx, eax
0x71751D: call    NiTriShapeData_ConstructWithData; Construct NiTriShapeData around supplied geometry and triangle data; shared-normal storage starts empty.
0x717522: jmp     short loc_717526
0x717524: xor     eax, eax
0x717526: push    eax
0x717527: mov     ecx, esi
0x717529: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x717531: call    NiTriBasedGeom__NiTriBasedGeom
0x717536: mov     dword ptr [esi], offset ??_7NiTriShape@@6B@;
0x71753C: mov     eax, esi
0x71753E: mov     ecx, [esp+18h+var_C]
0x717542: mov     large fs:0, ecx
0x717549: pop     ecx
0x71754A: pop     esi
0x71754B: add     esp, 10h
0x71754E: retn    24h ; '$'
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
