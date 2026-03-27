0x53B3F0: push    0FFFFFFFFh
0x53B3F2: push    offset SEH_53B3F0
0x53B3F7: mov     eax, large fs:0
0x53B3FD: push    eax
0x53B3FE: sub     esp, 4A0h
0x53B404: mov     eax, ds:0B30AACh
0x53B409: xor     eax, esp
0x53B40B: mov     [esp+4ACh+var_10], eax
0x53B412: push    ebx
0x53B413: push    ebp
0x53B414: push    esi
0x53B415: push    edi
0x53B416: mov     eax, ds:0B30AACh
0x53B41B: xor     eax, esp
0x53B41D: push    eax; ArgList
0x53B41E: lea     eax, [esp+4C0h+var_C]
0x53B425: mov     large fs:0, eax
0x53B42B: mov     eax, [esp+4C0h+arg_0]
0x53B432: mov     edi, ecx
0x53B434: mov     ecx, [esp+4C0h+arg_4]
0x53B43B: mov     [esp+4C0h+a2], ecx
0x53B43F: push    eax
0x53B440: mov     ecx, edi
0x53B442: call    sub_543D30
0x53B447: mov     ecx, [edi+4]
0x53B44A: push    offset aAtmosphereRoot; "Atmosphere Root"
0x53B44F: call    NiObjectNET_SetName
0x53B454: xor     ebx, ebx
0x53B456: cmp     ds:0B43070h, bl
0x53B45C: jnz     loc_53B572
0x53B462: lea     edx, [esp+4C0h+Src]
0x53B466: push    edx
0x53B467: call    sub_7BD0D0
0x53B46C: add     esp, 4
0x53B46F: lea     ebp, [edi+14h]
0x53B472: push    eax
0x53B473: mov     ecx, ebp
0x53B475: mov     [esp+4C4h+var_4], ebx
0x53B47C: call    sub_55E2A0
0x53B481: mov     eax, [esp+4C0h+Src]
0x53B485: cmp     eax, ebx
0x53B487: mov     [esp+4C0h+var_4], 0FFFFFFFFh
0x53B492: jz      short loc_53B4B2
0x53B494: mov     esi, eax
0x53B496: add     eax, 4
0x53B499: push    eax; lpAddend
0x53B49A: call    dword ptr ds:0A2807Ch
0x53B4A0: test    eax, eax
0x53B4A2: jnz     short loc_53B4B2
0x53B4A4: cmp     esi, ebx
0x53B4A6: jz      short loc_53B4B2
0x53B4A8: mov     eax, [esi]
0x53B4AA: mov     edx, [eax]
0x53B4AC: push    1
0x53B4AE: mov     ecx, esi
0x53B4B0: call    edx
0x53B4B2: mov     ecx, [ebp+0]
0x53B4B5: push    offset aAtmosphereQuad; "Atmosphere Quad"
0x53B4BA: call    NiObjectNET_SetName
0x53B4BF: mov     eax, [ebp+0]
0x53B4C2: or      word ptr [eax+18h], 2
0x53B4C7: mov     eax, ds:0B333CCh
0x53B4CC: cmp     [eax+0B6h], bx
0x53B4D3: ja      short loc_53B4D9
0x53B4D5: xor     eax, eax
0x53B4D7: jmp     short loc_53B4E1
0x53B4D9: mov     eax, [eax+0B0h]
0x53B4DF: mov     eax, [eax]
0x53B4E1: mov     ecx, [ebp+0]
0x53B4E4: mov     edx, [eax+54h]
0x53B4E7: add     eax, 54h ; 'T'
0x53B4EA: add     ecx, 54h ; 'T'
0x53B4ED: mov     [ecx], edx
0x53B4EF: mov     edx, [eax+4]
0x53B4F2: mov     [ecx+4], edx
0x53B4F5: mov     eax, [eax+8]
0x53B4F8: push    0DCh ; 'Ü'; Size
0x53B4FD: mov     [ecx+8], eax
0x53B500: call    FormHeapAlloc
0x53B505: add     esp, 4
0x53B508: mov     [esp+4C0h+Src], eax
0x53B50C: cmp     eax, ebx
0x53B50E: mov     [esp+4C0h+var_4], 1
0x53B519: jz      short loc_53B525
0x53B51B: push    ebx
0x53B51C: mov     ecx, eax; this
0x53B51E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x53B523: jmp     short loc_53B527
0x53B525: xor     eax, eax
0x53B527: lea     esi, [edi+10h]
0x53B52A: push    eax; a2
0x53B52B: mov     ecx, esi; this
0x53B52D: mov     [esp+4C4h+var_4], 0FFFFFFFFh
0x53B538: call    NiSmartPointer_Set??
0x53B53D: mov     ecx, [esi]
0x53B53F: push    offset aAtmosphereQu_0; "Atmosphere Quad Node"
0x53B544: call    NiObjectNET_SetName
0x53B549: mov     eax, [esi]
0x53B54B: or      word ptr [eax+18h], 2
0x53B550: mov     ecx, [esi]
0x53B552: mov     ebp, [ebp+0]
0x53B555: mov     edx, [ecx]
0x53B557: mov     eax, [edx+84h]
0x53B55D: push    ebx
0x53B55E: push    ebp
0x53B55F: call    eax
0x53B561: mov     ecx, [edi+4]
0x53B564: mov     esi, [esi]
0x53B566: mov     edx, [ecx]
0x53B568: mov     eax, [edx+84h]
0x53B56E: push    ebx
0x53B56F: push    esi
0x53B570: call    eax
0x53B572: lea     ecx, [esp+4C0h+var_4A0]; this
0x53B576: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x53B57B: mov     [esp+4C0h+var_4A0], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x53B583: mov     [esp+4C0h+var_14], ebx
0x53B58A: mov     [esp+4C0h+var_18], ebx
0x53B591: mov     [esp+4C0h+var_4], 2
0x53B59C: mov     [esp+4C0h+Src], ebx
0x53B5A0: mov     [esp+4C0h+var_4A8], bx
0x53B5A5: mov     [esp+4C0h+var_4A6], bx
0x53B5AA: lea     ecx, [esp+4C0h+Src]
0x53B5AE: push    offset aMeshesSkyAtmos; "Meshes\\Sky\\Atmosphere.nif"
0x53B5B3: push    ecx; int
0x53B5B4: mov     byte ptr [esp+4C8h+var_4], 3
0x53B5BC: call    BSStringT_Static_Format
0x53B5C1: mov     ebp, [esp+4C8h+Src]
0x53B5C5: add     esp, 8
0x53B5C8: push    ebx; int
0x53B5C9: push    ebp; Src
0x53B5CA: lea     ecx, [esp+4C8h+var_4A0]
0x53B5CE: call    sub_6F9980
0x53B5D3: test    al, al
0x53B5D5: jz      short loc_53B61D
0x53B5D7: cmp     [esp+4C0h+var_290], 1
0x53B5DF: jnz     short loc_53B61D
0x53B5E1: mov     edx, [esp+4C0h+var_298]
0x53B5E8: mov     esi, [edx]
0x53B5EA: cmp     esi, ebx
0x53B5EC: jz      short loc_53B61D
0x53B5EE: mov     eax, [esi]
0x53B5F0: mov     edx, [eax+8]
0x53B5F3: mov     ecx, esi
0x53B5F5: call    edx
0x53B5F7: test    eax, eax
0x53B5F9: jz      short loc_53B605
0x53B5FB: push    ebx
0x53B5FC: mov     ecx, esi
0x53B5FE: call    sub_405790
0x53B603: jmp     short loc_53B619
0x53B605: push    esi
0x53B606: push    offset dword_B3FCD4
0x53B60B: call    NiRTTI__IsObjectOfRTTIType
0x53B610: add     esp, 8
0x53B613: test    al, al
0x53B615: jz      short loc_53B61D
0x53B617: mov     eax, esi
0x53B619: cmp     eax, ebx
0x53B61B: jnz     short loc_53B646
0x53B61D: push    offset aCannotLoadTheA; "Cannot load the atmosphere model."
0x53B622: call    PrintError
0x53B627: push    ebp
0x53B628: call    FormHeapFree
0x53B62D: add     esp, 8
0x53B630: lea     ecx, [esp+4C0h+var_4A0]; this
0x53B634: mov     [esp+4C0h+var_4], 0FFFFFFFFh
0x53B63F: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x53B644: jmp     short loc_53B69F
0x53B646: lea     esi, [edi+8]
0x53B649: push    eax; a2
0x53B64A: mov     ecx, esi; this
0x53B64C: call    NiSmartPointer_Set??
0x53B651: mov     ecx, [esi]
0x53B653: push    offset aAtmosphereMesh; "Atmosphere Mesh"
0x53B658: call    NiObjectNET_SetName
0x53B65D: mov     eax, [esi]
0x53B65F: or      word ptr [eax+18h], 2
0x53B664: mov     ecx, [edi+4]
0x53B667: mov     esi, [esi]
0x53B669: mov     eax, [ecx]
0x53B66B: mov     edx, [eax+84h]
0x53B671: push    ebx
0x53B672: push    esi
0x53B673: call    edx
0x53B675: push    ebp
0x53B676: call    FormHeapFree
0x53B67B: add     esp, 4
0x53B67E: lea     ecx, [esp+4C0h+var_4A0]; this
0x53B682: mov     [esp+4C0h+var_4], 0FFFFFFFFh
0x53B68D: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x53B692: mov     eax, [esp+4C0h+a2]
0x53B696: push    eax; a2
0x53B697: lea     ecx, [edi+0Ch]; this
0x53B69A: call    NiSmartPointer_Set??
0x53B69F: mov     ecx, dword ptr [esp+4C0h+var_C]
0x53B6A6: mov     large fs:0, ecx
0x53B6AD: pop     ecx
0x53B6AE: pop     edi
0x53B6AF: pop     esi
0x53B6B0: pop     ebp
0x53B6B1: pop     ebx
0x53B6B2: mov     ecx, [esp+4ACh+var_10]
0x53B6B9: xor     ecx, esp
0x53B6BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53B6C0: add     esp, 4ACh
0x53B6C6: retn    8
