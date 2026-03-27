void sub_820C00()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int **v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  unsigned int **v8; // ebp
  NiD3DTextureStage *v9; // eax
  unsigned int **v10; // ebp
  NiD3DTextureStage *v11; // eax
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  unsigned int **v16; // ebp
  NiD3DTextureStage *v17; // eax
  unsigned int **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *VertexShader; // eax
  int v21; // ebx
  NiD3DVertexShader *v22; // ebp
  NiD3DPixelShader *PixelShader; // eax
  int v24; // ebx
  NiD3DPixelShader *v25; // ebp
  unsigned int **v26; // ebp
  NiD3DTextureStage *v27; // eax
  unsigned int **v28; // ebp
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  unsigned int *v32; // eax
  NiD3DTextureStage *v33; // eax
  unsigned int *v34; // edi
  unsigned int *v35; // eax
  NiD3DTextureStage *v36; // eax
  unsigned int *v37; // edi
  unsigned int *v38; // eax
  NiD3DTextureStage *v39; // eax
  unsigned int *v40; // edi
  unsigned int *v41; // eax
  NiD3DTextureStage *v42; // eax
  unsigned int *v43; // edi
  unsigned int *v44; // eax
  NiD3DTextureStage *v45; // eax
  unsigned int *v46; // eax
  NiD3DTextureStage *v47; // eax
  unsigned int *v48; // edi
  unsigned int *v49; // eax
  NiD3DTextureStage *v50; // eax
  unsigned int *v51; // edi
  unsigned int *v52; // eax
  NiD3DTextureStage *v53; // eax
  unsigned int *v54; // edi
  unsigned int *v55; // eax
  NiD3DTextureStage *v56; // eax
  unsigned int *v57; // edi
  unsigned int *v58; // eax
  NiD3DTextureStage *v59; // eax
  unsigned int *v60; // edi
  unsigned int *v61; // eax
  NiD3DTextureStage *v62; // eax
  unsigned int *v63; // edi
  unsigned int *v64; // eax
  NiD3DTextureStage *v65; // eax
  unsigned int *v66; // edi
  unsigned int *v67; // eax
  NiD3DTextureStage *v68; // eax
  unsigned int *v69; // eax
  NiD3DTextureStage *v70; // eax
  unsigned int *v71; // edi
  unsigned int *v72; // eax
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // edi
  unsigned int *v75; // eax
  NiD3DTextureStage *v76; // eax
  unsigned int *v77; // edi
  unsigned int *v78; // eax
  NiD3DTextureStage *v79; // eax
  unsigned int *v80; // edi
  unsigned int *v81; // eax
  NiD3DTextureStage *v82; // eax
  unsigned int *v83; // edi
  unsigned int *v84; // eax
  NiD3DTextureStage *v85; // eax
  unsigned int *v86; // edi
  unsigned int *v87; // eax
  NiD3DTextureStage *v88; // eax
  unsigned int *v89; // edi
  unsigned int *v90; // eax
  NiD3DTextureStage *v91; // eax
  unsigned int *v92; // eax
  NiD3DTextureStage *v93; // eax
  unsigned int *v94; // edi
  unsigned int *v95; // eax
  NiD3DTextureStage *v96; // eax
  unsigned int *v97; // edi
  unsigned int *v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  unsigned int *v101; // eax
  NiD3DTextureStage *v102; // eax
  unsigned int *v103; // edi
  unsigned int *v104; // eax
  NiD3DTextureStage *v105; // eax
  unsigned int *v106; // edi
  unsigned int *v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  unsigned int *v110; // eax
  NiD3DTextureStage *v111; // eax
  unsigned int *v112; // edi
  unsigned int *v113; // eax
  NiD3DTextureStage *v114; // eax
  unsigned int *v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  unsigned int *v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  unsigned int *v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  unsigned int *v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // edi
  unsigned int *v127; // eax
  NiD3DTextureStage *v128; // eax
  unsigned int *v129; // edi
  unsigned int *v130; // eax
  NiD3DTextureStage *v131; // eax
  unsigned int *v132; // edi
  unsigned int *v133; // eax
  NiD3DTextureStage *v134; // eax
  unsigned int *v135; // edi
  unsigned int *v136; // eax
  NiD3DTextureStage *v137; // eax
  unsigned int *v138; // eax
  NiD3DTextureStage *v139; // eax
  unsigned int *v140; // edi
  unsigned int *v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  unsigned int *v144; // eax
  NiD3DTextureStage *v145; // eax
  unsigned int *v146; // edi
  unsigned int *v147; // eax
  NiD3DTextureStage *v148; // eax
  unsigned int *v149; // edi
  unsigned int *v150; // eax
  NiD3DTextureStage *v151; // eax
  unsigned int *v152; // edi
  unsigned int *v153; // eax
  NiD3DTextureStage *v154; // eax
  unsigned int *v155; // edi
  unsigned int *v156; // eax
  NiD3DTextureStage *v157; // eax
  unsigned int *v158; // edi
  unsigned int *v159; // eax
  NiD3DTextureStage *v160; // eax
  unsigned int *v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  unsigned int *v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  unsigned int *v167; // eax
  NiD3DTextureStage *v168; // eax
  unsigned int *v169; // edi
  unsigned int *v170; // eax
  NiD3DTextureStage *v171; // eax
  unsigned int *v172; // edi
  unsigned int *v173; // eax
  NiD3DTextureStage *v174; // eax
  unsigned int *v175; // edi
  unsigned int *v176; // eax
  NiD3DTextureStage *v177; // eax
  unsigned int *v178; // edi
  unsigned int *v179; // eax
  NiD3DTextureStage *v180; // eax
  unsigned int *v181; // edi
  unsigned int *v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // eax
  NiD3DTextureStage *v185; // eax
  unsigned int *v186; // edi
  unsigned int *v187; // eax
  NiD3DTextureStage *v188; // eax
  unsigned int *v189; // edi
  unsigned int *v190; // eax
  NiD3DTextureStage *v191; // eax
  unsigned int *v192; // edi
  unsigned int *v193; // eax
  NiD3DTextureStage *v194; // eax
  unsigned int *v195; // edi
  unsigned int *v196; // eax
  NiD3DTextureStage *v197; // eax
  unsigned int *v198; // edi
  unsigned int *v199; // eax
  NiD3DTextureStage *v200; // eax
  unsigned int *v201; // edi
  unsigned int *v202; // eax
  NiD3DTextureStage *v203; // eax
  unsigned int *v204; // edi
  unsigned int *v205; // eax
  NiD3DTextureStage *v206; // eax
  unsigned int *v207; // eax
  NiD3DTextureStage *v208; // eax
  unsigned int *v209; // edi
  unsigned int *v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  unsigned int *v213; // eax
  NiD3DTextureStage *v214; // eax
  unsigned int *v215; // edi
  unsigned int *v216; // eax
  NiD3DTextureStage *v217; // eax
  unsigned int *v218; // edi
  unsigned int *v219; // eax
  NiD3DTextureStage *v220; // eax
  unsigned int *v221; // edi
  unsigned int *v222; // eax
  NiD3DTextureStage *v223; // eax
  unsigned int *v224; // edi
  unsigned int *v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  unsigned int *v228; // eax
  NiD3DTextureStage *v229; // eax
  NiD3DPass *v230; // esi
  unsigned int *v231; // eax
  NiD3DTextureStage *v232; // eax
  unsigned int *v233; // edi
  unsigned int *v234; // eax
  NiD3DTextureStage *v235; // eax
  unsigned int *v236; // edi
  unsigned int *v237; // eax
  NiD3DTextureStage *v238; // eax
  unsigned int *v239; // edi
  unsigned int *v240; // eax
  NiD3DTextureStage *v241; // eax
  unsigned int *v242; // edi
  unsigned int *v243; // eax
  NiD3DTextureStage *v244; // eax
  unsigned int *v245; // edi
  unsigned int *v246; // eax
  NiD3DTextureStage *v247; // eax
  unsigned int *v248; // edi
  unsigned int *v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  unsigned int *v252; // eax
  NiD3DTextureStage *v253; // eax
  NiD3DPass *v254; // esi
  unsigned int *v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  unsigned int *v258; // eax
  NiD3DTextureStage *v259; // eax
  unsigned int *v260; // edi
  unsigned int *v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  unsigned int *v264; // eax
  NiD3DTextureStage *v265; // eax
  unsigned int *v266; // edi
  unsigned int *v267; // eax
  NiD3DTextureStage *v268; // eax
  unsigned int *v269; // edi
  unsigned int *v270; // eax
  NiD3DTextureStage *v271; // eax
  unsigned int *v272; // edi
  unsigned int *v273; // eax
  NiD3DTextureStage *v274; // eax
  unsigned int *v275; // edi
  unsigned int *v276; // eax
  NiD3DTextureStage *v277; // eax
  NiD3DPass *v278; // esi
  unsigned int *v279; // eax
  NiD3DTextureStage *v280; // eax
  unsigned int *v281; // edi
  unsigned int *v282; // eax
  NiD3DTextureStage *v283; // eax
  unsigned int *v284; // edi
  unsigned int *v285; // eax
  NiD3DTextureStage *v286; // eax
  unsigned int *v287; // edi
  unsigned int *v288; // eax
  NiD3DTextureStage *v289; // eax
  unsigned int *v290; // edi
  unsigned int *v291; // eax
  NiD3DTextureStage *v292; // eax
  unsigned int *v293; // edi
  unsigned int *v294; // eax
  NiD3DTextureStage *v295; // eax
  unsigned int *v296; // edi
  unsigned int *v297; // eax
  NiD3DTextureStage *v298; // eax
  unsigned int *v299; // edi
  unsigned int *v300; // eax
  NiD3DTextureStage *v301; // eax
  NiD3DPass *v302; // esi
  unsigned int *v303; // eax
  NiD3DTextureStage *v304; // eax
  unsigned int *v305; // edi
  unsigned int *v306; // eax
  NiD3DTextureStage *v307; // eax
  unsigned int *v308; // edi
  unsigned int *v309; // eax
  NiD3DTextureStage *v310; // eax
  unsigned int *v311; // edi
  unsigned int *v312; // eax
  NiD3DTextureStage *v313; // eax
  unsigned int *v314; // edi
  unsigned int *v315; // eax
  NiD3DTextureStage *v316; // eax
  unsigned int *v317; // edi
  unsigned int *v318; // eax
  NiD3DTextureStage *v319; // eax
  unsigned int *v320; // edi
  unsigned int *v321; // eax
  NiD3DTextureStage *v322; // eax
  unsigned int *v323; // edi
  unsigned int *v324; // eax
  NiD3DTextureStage *v325; // eax
  NiD3DPass *v326; // esi
  unsigned int *v327; // eax
  NiD3DTextureStage *v328; // eax
  unsigned int *v329; // edi
  unsigned int *v330; // eax
  NiD3DTextureStage *v331; // eax
  unsigned int *v332; // edi
  unsigned int *v333; // eax
  NiD3DTextureStage *v334; // eax
  unsigned int *v335; // edi
  unsigned int *v336; // eax
  NiD3DTextureStage *v337; // eax
  unsigned int *v338; // edi
  unsigned int *v339; // eax
  NiD3DTextureStage *v340; // eax
  unsigned int *v341; // edi
  unsigned int *v342; // eax
  NiD3DTextureStage *v343; // eax
  unsigned int *v344; // edi
  unsigned int *v345; // eax
  NiD3DTextureStage *v346; // eax
  unsigned int *v347; // edi
  unsigned int *v348; // eax
  NiD3DTextureStage *v349; // eax
  NiD3DPass *v350; // esi
  unsigned int *v351; // eax
  NiD3DTextureStage *v352; // eax
  unsigned int *v353; // edi
  unsigned int *v354; // eax
  NiD3DTextureStage *v355; // eax
  unsigned int *v356; // edi
  unsigned int *v357; // eax
  NiD3DTextureStage *v358; // eax
  unsigned int *v359; // edi
  unsigned int *v360; // eax
  NiD3DTextureStage *v361; // eax
  unsigned int *v362; // edi
  unsigned int *v363; // eax
  NiD3DTextureStage *v364; // eax
  unsigned int *v365; // edi
  unsigned int *v366; // eax
  NiD3DTextureStage *v367; // eax
  unsigned int *v368; // edi
  unsigned int *v369; // eax
  NiD3DTextureStage *v370; // eax
  unsigned int *v371; // edi
  unsigned int *v372; // eax
  NiD3DTextureStage *v373; // eax
  NiD3DPass *v374; // esi
  unsigned int *v375; // eax
  NiD3DTextureStage *v376; // eax
  unsigned int *v377; // edi
  unsigned int *v378; // eax
  NiD3DTextureStage *v379; // eax
  unsigned int *v380; // edi
  unsigned int *v381; // eax
  NiD3DTextureStage *v382; // eax
  unsigned int *v383; // edi
  unsigned int *v384; // eax
  NiD3DTextureStage *v385; // eax
  unsigned int *v386; // edi
  unsigned int *v387; // eax
  NiD3DTextureStage *v388; // eax
  unsigned int *v389; // edi
  unsigned int *v390; // eax
  NiD3DTextureStage *v391; // eax
  unsigned int *v392; // edi
  unsigned int *v393; // eax
  NiD3DTextureStage *v394; // eax
  unsigned int *v395; // edi
  unsigned int *v396; // eax
  NiD3DTextureStage *v397; // eax
  NiD3DPass *v398; // esi
  unsigned int *v399; // eax
  NiD3DTextureStage *v400; // eax
  unsigned int *v401; // edi
  unsigned int *v402; // eax
  NiD3DTextureStage *v403; // eax
  unsigned int *v404; // edi
  unsigned int *v405; // eax
  NiD3DTextureStage *v406; // eax
  unsigned int *v407; // edi
  unsigned int *v408; // eax
  NiD3DTextureStage *v409; // eax
  unsigned int *v410; // edi
  unsigned int *v411; // eax
  NiD3DTextureStage *v412; // eax
  unsigned int *v413; // edi
  unsigned int *v414; // eax
  NiD3DTextureStage *v415; // eax
  unsigned int *v416; // edi
  unsigned int *v417; // eax
  NiD3DTextureStage *v418; // eax
  unsigned int *v419; // edi
  unsigned int *v420; // eax
  NiD3DTextureStage *v421; // eax
  NiD3DPass *v422; // esi
  unsigned int *v423; // eax
  NiD3DTextureStage *v424; // eax
  unsigned int *v425; // edi
  unsigned int *v426; // eax
  NiD3DTextureStage *v427; // eax
  unsigned int *v428; // edi
  unsigned int *v429; // eax
  NiD3DTextureStage *v430; // eax
  unsigned int *v431; // edi
  unsigned int *v432; // eax
  NiD3DTextureStage *v433; // eax
  unsigned int *v434; // edi
  unsigned int *v435; // eax
  NiD3DTextureStage *v436; // eax
  unsigned int *v437; // edi
  unsigned int *v438; // eax
  NiD3DTextureStage *v439; // eax
  unsigned int *v440; // edi
  unsigned int *v441; // eax
  NiD3DTextureStage *v442; // eax
  unsigned int *v443; // edi
  unsigned int *v444; // eax
  NiD3DTextureStage *v445; // eax
  NiD3DPass *v446; // esi
  unsigned int *v447; // eax
  NiD3DTextureStage *v448; // eax
  unsigned int *v449; // edi
  unsigned int *v450; // eax
  NiD3DTextureStage *v451; // eax
  unsigned int *v452; // edi
  unsigned int *v453; // eax
  NiD3DTextureStage *v454; // eax
  unsigned int *v455; // edi
  unsigned int *v456; // eax
  NiD3DTextureStage *v457; // eax
  unsigned int *v458; // edi
  unsigned int *v459; // eax
  NiD3DTextureStage *v460; // eax
  unsigned int *v461; // edi
  unsigned int *v462; // eax
  NiD3DTextureStage *v463; // eax
  unsigned int *v464; // edi
  unsigned int *v465; // eax
  NiD3DTextureStage *v466; // eax
  unsigned int *v467; // edi
  unsigned int *v468; // eax
  NiD3DTextureStage *v469; // eax
  NiD3DPass *v470; // esi
  unsigned int *v471; // eax
  NiD3DTextureStage *v472; // eax
  unsigned int *v473; // edi
  unsigned int *v474; // eax
  NiD3DTextureStage *v475; // eax
  unsigned int *v476; // edi
  unsigned int *v477; // eax
  NiD3DTextureStage *v478; // eax
  unsigned int *v479; // edi
  unsigned int *v480; // eax
  NiD3DTextureStage *v481; // eax
  unsigned int *v482; // edi
  unsigned int *v483; // eax
  NiD3DTextureStage *v484; // eax
  unsigned int *v485; // edi
  unsigned int *v486; // eax
  NiD3DTextureStage *v487; // eax
  unsigned int *v488; // edi
  unsigned int *v489; // eax
  NiD3DTextureStage *v490; // eax
  unsigned int *v491; // edi
  unsigned int *v492; // eax
  NiD3DTextureStage *v493; // eax
  NiD3DPass *v494; // esi
  unsigned int *v495; // eax
  NiD3DTextureStage *v496; // eax
  unsigned int *v497; // edi
  unsigned int *v498; // eax
  NiD3DTextureStage *v499; // eax
  unsigned int *v500; // edi
  unsigned int *v501; // eax
  NiD3DTextureStage *v502; // eax
  unsigned int *v503; // edi
  unsigned int *v504; // eax
  NiD3DTextureStage *v505; // eax
  unsigned int *v506; // edi
  unsigned int *v507; // eax
  NiD3DTextureStage *v508; // eax
  unsigned int *v509; // edi
  unsigned int *v510; // eax
  NiD3DTextureStage *v511; // eax
  unsigned int *v512; // edi
  unsigned int *v513; // eax
  NiD3DTextureStage *v514; // eax
  unsigned int *v515; // edi
  unsigned int *v516; // eax
  NiD3DTextureStage *v517; // eax
  NiD3DPass *v518; // esi
  unsigned int *v519; // eax
  NiD3DTextureStage *v520; // eax
  unsigned int *v521; // edi
  unsigned int *v522; // eax
  NiD3DTextureStage *v523; // eax
  unsigned int *v524; // edi
  unsigned int *v525; // eax
  NiD3DTextureStage *v526; // eax
  unsigned int *v527; // edi
  unsigned int *v528; // eax
  NiD3DTextureStage *v529; // eax
  unsigned int *v530; // edi
  unsigned int *v531; // eax
  NiD3DTextureStage *v532; // eax
  unsigned int *v533; // edi
  unsigned int *v534; // eax
  NiD3DTextureStage *v535; // eax
  unsigned int *v536; // edi
  unsigned int *v537; // eax
  NiD3DTextureStage *v538; // eax
  unsigned int *v539; // edi
  unsigned int *v540; // eax
  NiD3DTextureStage *v541; // eax
  NiD3DPass *v542; // esi
  unsigned int *v543; // eax
  NiD3DTextureStage *v544; // eax
  unsigned int *v545; // edi
  unsigned int *v546; // eax
  NiD3DTextureStage *v547; // eax
  unsigned int *v548; // edi
  unsigned int *v549; // eax
  NiD3DTextureStage *v550; // eax
  unsigned int *v551; // edi
  unsigned int *v552; // eax
  NiD3DTextureStage *v553; // eax
  unsigned int *v554; // edi
  unsigned int *v555; // eax
  NiD3DTextureStage *v556; // eax
  unsigned int *v557; // edi
  unsigned int *v558; // eax
  NiD3DTextureStage *v559; // eax
  unsigned int *v560; // edi
  unsigned int *v561; // eax
  NiD3DTextureStage *v562; // eax
  unsigned int *v563; // edi
  unsigned int *v564; // eax
  NiD3DTextureStage *v565; // eax
  NiD3DPass *v566; // esi
  unsigned int *v567; // eax
  NiD3DTextureStage *v568; // eax
  unsigned int *v569; // edi
  unsigned int *v570; // eax
  NiD3DTextureStage *v571; // eax
  unsigned int *v572; // edi
  unsigned int *v573; // eax
  NiD3DTextureStage *v574; // eax
  unsigned int *v575; // edi
  unsigned int *v576; // eax
  NiD3DTextureStage *v577; // eax
  unsigned int *v578; // edi
  unsigned int *v579; // eax
  NiD3DTextureStage *v580; // eax
  unsigned int *v581; // edi
  unsigned int *v582; // eax
  NiD3DTextureStage *v583; // eax
  unsigned int *v584; // edi
  unsigned int *v585; // eax
  NiD3DTextureStage *v586; // eax
  unsigned int *v587; // edi
  unsigned int *v588; // eax
  NiD3DTextureStage *v589; // eax
  NiD3DPass *v590; // esi
  unsigned int *v591; // eax
  NiD3DTextureStage *v592; // eax
  unsigned int *v593; // edi
  unsigned int *v594; // eax
  NiD3DTextureStage *v595; // eax
  unsigned int *v596; // edi
  unsigned int *v597; // eax
  NiD3DTextureStage *v598; // eax
  unsigned int *v599; // edi
  unsigned int *v600; // eax
  NiD3DTextureStage *v601; // eax
  unsigned int *v602; // edi
  unsigned int *v603; // eax
  NiD3DTextureStage *v604; // eax
  unsigned int *v605; // edi
  unsigned int *v606; // eax
  NiD3DTextureStage *v607; // eax
  unsigned int *v608; // edi
  unsigned int *v609; // eax
  NiD3DTextureStage *v610; // eax
  unsigned int *v611; // edi
  unsigned int *v612; // eax
  NiD3DTextureStage *v613; // eax
  NiD3DPass *v614; // esi
  unsigned int *v615; // eax
  NiD3DTextureStage *v616; // eax
  unsigned int *v617; // edi
  unsigned int *v618; // eax
  NiD3DTextureStage *v619; // eax
  unsigned int *v620; // edi
  unsigned int *v621; // eax
  NiD3DTextureStage *v622; // eax
  unsigned int *v623; // edi
  unsigned int *v624; // eax
  NiD3DTextureStage *v625; // eax
  unsigned int *v626; // edi
  unsigned int *v627; // eax
  NiD3DTextureStage *v628; // eax
  unsigned int *v629; // edi
  unsigned int *v630; // eax
  NiD3DTextureStage *v631; // eax
  unsigned int *v632; // edi
  unsigned int *v633; // eax
  NiD3DTextureStage *v634; // eax
  unsigned int *v635; // edi
  unsigned int *v636; // eax
  NiD3DTextureStage *v637; // eax
  NiD3DPass *v638; // esi
  unsigned int *v639; // eax
  NiD3DTextureStage *v640; // eax
  NiD3DPass *v641; // esi
  unsigned int *v642; // eax
  NiD3DTextureStage *v643; // eax
  NiD3DPass *v644; // esi
  unsigned int *v645; // eax
  NiD3DTextureStage *v646; // eax
  NiD3DPass *v647; // esi
  unsigned int *v648; // eax
  NiD3DTextureStage *v649; // eax
  unsigned int *a3; // [esp+14h] [ebp-384h] BYREF
  NiD3DPassVtbl **v651; // [esp+18h] [ebp-380h] BYREF
  NiD3DTextureStage *v652; // [esp+1Ch] [ebp-37Ch] BYREF
  NiD3DTextureStage *v653; // [esp+20h] [ebp-378h] BYREF
  NiD3DTextureStage *v654; // [esp+24h] [ebp-374h] BYREF
  NiD3DTextureStage *v655; // [esp+28h] [ebp-370h] BYREF
  NiD3DTextureStage *v656; // [esp+2Ch] [ebp-36Ch] BYREF
  NiD3DTextureStage *v657; // [esp+30h] [ebp-368h] BYREF
  NiD3DTextureStage *v658; // [esp+34h] [ebp-364h] BYREF
  NiD3DTextureStage *v659; // [esp+38h] [ebp-360h] BYREF
  NiD3DTextureStage *v660; // [esp+3Ch] [ebp-35Ch] BYREF
  NiD3DTextureStage *v661; // [esp+40h] [ebp-358h] BYREF
  NiD3DTextureStage *v662; // [esp+44h] [ebp-354h] BYREF
  NiD3DTextureStage *v663; // [esp+48h] [ebp-350h] BYREF
  NiD3DTextureStage *v664; // [esp+4Ch] [ebp-34Ch] BYREF
  NiD3DTextureStage *v665; // [esp+50h] [ebp-348h] BYREF
  NiD3DTextureStage *v666; // [esp+54h] [ebp-344h] BYREF
  NiD3DTextureStage *v667; // [esp+58h] [ebp-340h] BYREF
  NiD3DTextureStage *v668; // [esp+5Ch] [ebp-33Ch] BYREF
  NiD3DTextureStage *v669; // [esp+60h] [ebp-338h] BYREF
  NiD3DTextureStage *v670; // [esp+64h] [ebp-334h] BYREF
  NiD3DTextureStage *v671; // [esp+68h] [ebp-330h] BYREF
  NiD3DTextureStage *v672; // [esp+6Ch] [ebp-32Ch] BYREF
  NiD3DTextureStage *v673; // [esp+70h] [ebp-328h] BYREF
  NiD3DTextureStage *v674; // [esp+74h] [ebp-324h] BYREF
  NiD3DTextureStage *v675; // [esp+78h] [ebp-320h] BYREF
  NiD3DTextureStage *v676; // [esp+7Ch] [ebp-31Ch] BYREF
  NiD3DTextureStage *v677; // [esp+80h] [ebp-318h] BYREF
  NiD3DTextureStage *v678; // [esp+84h] [ebp-314h] BYREF
  NiD3DTextureStage *v679; // [esp+88h] [ebp-310h] BYREF
  NiD3DTextureStage *v680; // [esp+8Ch] [ebp-30Ch] BYREF
  NiD3DTextureStage *v681; // [esp+90h] [ebp-308h] BYREF
  NiD3DTextureStage *v682; // [esp+94h] [ebp-304h] BYREF
  NiD3DTextureStage *v683; // [esp+98h] [ebp-300h] BYREF
  NiD3DTextureStage *v684; // [esp+9Ch] [ebp-2FCh] BYREF
  NiD3DTextureStage *v685; // [esp+A0h] [ebp-2F8h] BYREF
  NiD3DTextureStage *v686; // [esp+A4h] [ebp-2F4h] BYREF
  NiD3DTextureStage *v687; // [esp+A8h] [ebp-2F0h] BYREF
  NiD3DTextureStage *v688; // [esp+ACh] [ebp-2ECh] BYREF
  NiD3DTextureStage *v689; // [esp+B0h] [ebp-2E8h] BYREF
  NiD3DTextureStage *v690; // [esp+B4h] [ebp-2E4h] BYREF
  NiD3DTextureStage *v691; // [esp+B8h] [ebp-2E0h] BYREF
  NiD3DTextureStage *v692; // [esp+BCh] [ebp-2DCh] BYREF
  NiD3DTextureStage *v693; // [esp+C0h] [ebp-2D8h] BYREF
  NiD3DTextureStage *v694; // [esp+C4h] [ebp-2D4h] BYREF
  NiD3DTextureStage *v695; // [esp+C8h] [ebp-2D0h] BYREF
  NiD3DTextureStage *v696; // [esp+CCh] [ebp-2CCh] BYREF
  NiD3DTextureStage *v697; // [esp+D0h] [ebp-2C8h] BYREF
  NiD3DTextureStage *v698; // [esp+D4h] [ebp-2C4h] BYREF
  NiD3DTextureStage *v699; // [esp+D8h] [ebp-2C0h] BYREF
  NiD3DTextureStage *v700; // [esp+DCh] [ebp-2BCh] BYREF
  NiD3DTextureStage *v701; // [esp+E0h] [ebp-2B8h] BYREF
  NiD3DTextureStage *v702; // [esp+E4h] [ebp-2B4h] BYREF
  NiD3DTextureStage *v703; // [esp+E8h] [ebp-2B0h] BYREF
  NiD3DTextureStage *v704; // [esp+ECh] [ebp-2ACh] BYREF
  NiD3DTextureStage *v705; // [esp+F0h] [ebp-2A8h] BYREF
  NiD3DTextureStage *v706; // [esp+F4h] [ebp-2A4h] BYREF
  NiD3DTextureStage *v707; // [esp+F8h] [ebp-2A0h] BYREF
  NiD3DTextureStage *v708; // [esp+FCh] [ebp-29Ch] BYREF
  NiD3DTextureStage *v709; // [esp+100h] [ebp-298h] BYREF
  NiD3DTextureStage *v710; // [esp+104h] [ebp-294h] BYREF
  NiD3DTextureStage *v711; // [esp+108h] [ebp-290h] BYREF
  NiD3DTextureStage *v712; // [esp+10Ch] [ebp-28Ch] BYREF
  NiD3DTextureStage *v713; // [esp+110h] [ebp-288h] BYREF
  NiD3DTextureStage *v714; // [esp+114h] [ebp-284h] BYREF
  NiD3DTextureStage *v715; // [esp+118h] [ebp-280h] BYREF
  NiD3DTextureStage *v716; // [esp+11Ch] [ebp-27Ch] BYREF
  NiD3DTextureStage *v717; // [esp+120h] [ebp-278h] BYREF
  NiD3DTextureStage *v718; // [esp+124h] [ebp-274h] BYREF
  NiD3DTextureStage *v719; // [esp+128h] [ebp-270h] BYREF
  NiD3DTextureStage *v720; // [esp+12Ch] [ebp-26Ch] BYREF
  NiD3DTextureStage *v721; // [esp+130h] [ebp-268h] BYREF
  NiD3DTextureStage *v722; // [esp+134h] [ebp-264h] BYREF
  NiD3DTextureStage *v723; // [esp+138h] [ebp-260h] BYREF
  NiD3DTextureStage *v724; // [esp+13Ch] [ebp-25Ch] BYREF
  NiD3DTextureStage *v725; // [esp+140h] [ebp-258h] BYREF
  NiD3DTextureStage *v726; // [esp+144h] [ebp-254h] BYREF
  NiD3DTextureStage *v727; // [esp+148h] [ebp-250h] BYREF
  NiD3DTextureStage *v728; // [esp+14Ch] [ebp-24Ch] BYREF
  NiD3DTextureStage *v729; // [esp+150h] [ebp-248h] BYREF
  NiD3DTextureStage *v730; // [esp+154h] [ebp-244h] BYREF
  NiD3DTextureStage *v731; // [esp+158h] [ebp-240h] BYREF
  NiD3DTextureStage *v732; // [esp+15Ch] [ebp-23Ch] BYREF
  NiD3DTextureStage *v733; // [esp+160h] [ebp-238h] BYREF
  NiD3DTextureStage *v734; // [esp+164h] [ebp-234h] BYREF
  NiD3DTextureStage *v735; // [esp+168h] [ebp-230h] BYREF
  NiD3DTextureStage *v736; // [esp+16Ch] [ebp-22Ch] BYREF
  NiD3DTextureStage *v737; // [esp+170h] [ebp-228h] BYREF
  NiD3DTextureStage *v738; // [esp+174h] [ebp-224h] BYREF
  NiD3DTextureStage *v739; // [esp+178h] [ebp-220h] BYREF
  NiD3DTextureStage *v740; // [esp+17Ch] [ebp-21Ch] BYREF
  NiD3DTextureStage *v741; // [esp+180h] [ebp-218h] BYREF
  NiD3DTextureStage *v742; // [esp+184h] [ebp-214h] BYREF
  NiD3DTextureStage *v743; // [esp+188h] [ebp-210h] BYREF
  NiD3DTextureStage *v744; // [esp+18Ch] [ebp-20Ch] BYREF
  NiD3DTextureStage *v745; // [esp+190h] [ebp-208h] BYREF
  NiD3DTextureStage *v746; // [esp+194h] [ebp-204h] BYREF
  NiD3DTextureStage *v747; // [esp+198h] [ebp-200h] BYREF
  NiD3DTextureStage *v748; // [esp+19Ch] [ebp-1FCh] BYREF
  NiD3DTextureStage *v749; // [esp+1A0h] [ebp-1F8h] BYREF
  NiD3DTextureStage *v750; // [esp+1A4h] [ebp-1F4h] BYREF
  NiD3DTextureStage *v751; // [esp+1A8h] [ebp-1F0h] BYREF
  NiD3DTextureStage *v752; // [esp+1ACh] [ebp-1ECh] BYREF
  NiD3DTextureStage *v753; // [esp+1B0h] [ebp-1E8h] BYREF
  NiD3DTextureStage *v754; // [esp+1B4h] [ebp-1E4h] BYREF
  NiD3DTextureStage *v755; // [esp+1B8h] [ebp-1E0h] BYREF
  NiD3DTextureStage *v756; // [esp+1BCh] [ebp-1DCh] BYREF
  NiD3DTextureStage *v757; // [esp+1C0h] [ebp-1D8h] BYREF
  NiD3DTextureStage *v758; // [esp+1C4h] [ebp-1D4h] BYREF
  NiD3DTextureStage *v759; // [esp+1C8h] [ebp-1D0h] BYREF
  NiD3DTextureStage *v760; // [esp+1CCh] [ebp-1CCh] BYREF
  NiD3DTextureStage *v761; // [esp+1D0h] [ebp-1C8h] BYREF
  NiD3DTextureStage *v762; // [esp+1D4h] [ebp-1C4h] BYREF
  NiD3DTextureStage *v763; // [esp+1D8h] [ebp-1C0h] BYREF
  NiD3DTextureStage *v764; // [esp+1DCh] [ebp-1BCh] BYREF
  NiD3DTextureStage *v765; // [esp+1E0h] [ebp-1B8h] BYREF
  NiD3DTextureStage *v766; // [esp+1E4h] [ebp-1B4h] BYREF
  NiD3DTextureStage *v767; // [esp+1E8h] [ebp-1B0h] BYREF
  NiD3DTextureStage *v768; // [esp+1ECh] [ebp-1ACh] BYREF
  NiD3DTextureStage *v769; // [esp+1F0h] [ebp-1A8h] BYREF
  NiD3DTextureStage *v770; // [esp+1F4h] [ebp-1A4h] BYREF
  NiD3DTextureStage *v771; // [esp+1F8h] [ebp-1A0h] BYREF
  NiD3DTextureStage *v772; // [esp+1FCh] [ebp-19Ch] BYREF
  NiD3DTextureStage *v773; // [esp+200h] [ebp-198h] BYREF
  NiD3DTextureStage *v774; // [esp+204h] [ebp-194h] BYREF
  NiD3DTextureStage *v775; // [esp+208h] [ebp-190h] BYREF
  NiD3DTextureStage *v776; // [esp+20Ch] [ebp-18Ch] BYREF
  NiD3DTextureStage *v777; // [esp+210h] [ebp-188h] BYREF
  NiD3DTextureStage *v778; // [esp+214h] [ebp-184h] BYREF
  NiD3DTextureStage *v779; // [esp+218h] [ebp-180h] BYREF
  NiD3DTextureStage *v780; // [esp+21Ch] [ebp-17Ch] BYREF
  NiD3DTextureStage *v781; // [esp+220h] [ebp-178h] BYREF
  NiD3DTextureStage *v782; // [esp+224h] [ebp-174h] BYREF
  NiD3DTextureStage *v783; // [esp+228h] [ebp-170h] BYREF
  NiD3DTextureStage *v784; // [esp+22Ch] [ebp-16Ch] BYREF
  NiD3DTextureStage *v785; // [esp+230h] [ebp-168h] BYREF
  NiD3DTextureStage *v786; // [esp+234h] [ebp-164h] BYREF
  NiD3DTextureStage *v787; // [esp+238h] [ebp-160h] BYREF
  NiD3DTextureStage *v788; // [esp+23Ch] [ebp-15Ch] BYREF
  NiD3DTextureStage *v789; // [esp+240h] [ebp-158h] BYREF
  NiD3DTextureStage *v790; // [esp+244h] [ebp-154h] BYREF
  NiD3DTextureStage *v791; // [esp+248h] [ebp-150h] BYREF
  NiD3DTextureStage *v792; // [esp+24Ch] [ebp-14Ch] BYREF
  NiD3DTextureStage *v793; // [esp+250h] [ebp-148h] BYREF
  NiD3DTextureStage *v794; // [esp+254h] [ebp-144h] BYREF
  NiD3DTextureStage *v795; // [esp+258h] [ebp-140h] BYREF
  NiD3DTextureStage *v796; // [esp+25Ch] [ebp-13Ch] BYREF
  NiD3DTextureStage *v797; // [esp+260h] [ebp-138h] BYREF
  NiD3DTextureStage *v798; // [esp+264h] [ebp-134h] BYREF
  NiD3DTextureStage *v799; // [esp+268h] [ebp-130h] BYREF
  NiD3DTextureStage *v800; // [esp+26Ch] [ebp-12Ch] BYREF
  NiD3DTextureStage *v801; // [esp+270h] [ebp-128h] BYREF
  NiD3DTextureStage *v802; // [esp+274h] [ebp-124h] BYREF
  NiD3DTextureStage *v803; // [esp+278h] [ebp-120h] BYREF
  NiD3DTextureStage *v804; // [esp+27Ch] [ebp-11Ch] BYREF
  NiD3DTextureStage *v805; // [esp+280h] [ebp-118h] BYREF
  NiD3DTextureStage *v806; // [esp+284h] [ebp-114h] BYREF
  NiD3DTextureStage *v807; // [esp+288h] [ebp-110h] BYREF
  NiD3DTextureStage *v808; // [esp+28Ch] [ebp-10Ch] BYREF
  NiD3DTextureStage *v809; // [esp+290h] [ebp-108h] BYREF
  NiD3DTextureStage *v810; // [esp+294h] [ebp-104h] BYREF
  NiD3DTextureStage *v811; // [esp+298h] [ebp-100h] BYREF
  NiD3DTextureStage *v812; // [esp+29Ch] [ebp-FCh] BYREF
  NiD3DTextureStage *v813; // [esp+2A0h] [ebp-F8h] BYREF
  NiD3DTextureStage *v814; // [esp+2A4h] [ebp-F4h] BYREF
  NiD3DTextureStage *v815; // [esp+2A8h] [ebp-F0h] BYREF
  NiD3DTextureStage *v816; // [esp+2ACh] [ebp-ECh] BYREF
  NiD3DTextureStage *v817; // [esp+2B0h] [ebp-E8h] BYREF
  NiD3DTextureStage *v818; // [esp+2B4h] [ebp-E4h] BYREF
  NiD3DTextureStage *v819; // [esp+2B8h] [ebp-E0h] BYREF
  NiD3DTextureStage *v820; // [esp+2BCh] [ebp-DCh] BYREF
  NiD3DTextureStage *v821; // [esp+2C0h] [ebp-D8h] BYREF
  NiD3DTextureStage *v822; // [esp+2C4h] [ebp-D4h] BYREF
  NiD3DTextureStage *v823; // [esp+2C8h] [ebp-D0h] BYREF
  NiD3DTextureStage *v824; // [esp+2CCh] [ebp-CCh] BYREF
  NiD3DTextureStage *v825; // [esp+2D0h] [ebp-C8h] BYREF
  NiD3DTextureStage *v826; // [esp+2D4h] [ebp-C4h] BYREF
  NiD3DTextureStage *v827; // [esp+2D8h] [ebp-C0h] BYREF
  NiD3DTextureStage *v828; // [esp+2DCh] [ebp-BCh] BYREF
  NiD3DTextureStage *v829; // [esp+2E0h] [ebp-B8h] BYREF
  NiD3DTextureStage *v830; // [esp+2E4h] [ebp-B4h] BYREF
  NiD3DTextureStage *v831; // [esp+2E8h] [ebp-B0h] BYREF
  NiD3DTextureStage *v832; // [esp+2ECh] [ebp-ACh] BYREF
  NiD3DTextureStage *v833; // [esp+2F0h] [ebp-A8h] BYREF
  NiD3DTextureStage *v834; // [esp+2F4h] [ebp-A4h] BYREF
  NiD3DTextureStage *v835; // [esp+2F8h] [ebp-A0h] BYREF
  NiD3DTextureStage *v836; // [esp+2FCh] [ebp-9Ch] BYREF
  NiD3DTextureStage *v837; // [esp+300h] [ebp-98h] BYREF
  NiD3DTextureStage *v838; // [esp+304h] [ebp-94h] BYREF
  NiD3DTextureStage *v839; // [esp+308h] [ebp-90h] BYREF
  NiD3DTextureStage *v840; // [esp+30Ch] [ebp-8Ch] BYREF
  NiD3DTextureStage *v841; // [esp+310h] [ebp-88h] BYREF
  NiD3DTextureStage *v842; // [esp+314h] [ebp-84h] BYREF
  NiD3DTextureStage *v843; // [esp+318h] [ebp-80h] BYREF
  NiD3DTextureStage *v844; // [esp+31Ch] [ebp-7Ch] BYREF
  NiD3DTextureStage *v845; // [esp+320h] [ebp-78h] BYREF
  NiD3DTextureStage *v846; // [esp+324h] [ebp-74h] BYREF
  NiD3DTextureStage *v847; // [esp+328h] [ebp-70h] BYREF
  NiD3DTextureStage *v848; // [esp+32Ch] [ebp-6Ch] BYREF
  NiD3DTextureStage *v849; // [esp+330h] [ebp-68h] BYREF
  NiD3DTextureStage *v850; // [esp+334h] [ebp-64h] BYREF
  NiD3DTextureStage *v851; // [esp+338h] [ebp-60h] BYREF
  NiD3DTextureStage *v852; // [esp+33Ch] [ebp-5Ch] BYREF
  NiD3DTextureStage *v853; // [esp+340h] [ebp-58h] BYREF
  NiD3DTextureStage *v854; // [esp+344h] [ebp-54h] BYREF
  NiD3DTextureStage *v855; // [esp+348h] [ebp-50h] BYREF
  NiD3DTextureStage *v856; // [esp+34Ch] [ebp-4Ch] BYREF
  NiD3DTextureStage *v857; // [esp+350h] [ebp-48h] BYREF
  NiD3DTextureStage *v858; // [esp+354h] [ebp-44h] BYREF
  NiD3DTextureStage *v859; // [esp+358h] [ebp-40h] BYREF
  NiD3DTextureStage *v860; // [esp+35Ch] [ebp-3Ch] BYREF
  NiD3DTextureStage *v861; // [esp+360h] [ebp-38h] BYREF
  NiD3DTextureStage *v862; // [esp+364h] [ebp-34h] BYREF
  NiD3DTextureStage *v863; // [esp+368h] [ebp-30h] BYREF
  NiD3DTextureStage *v864; // [esp+36Ch] [ebp-2Ch] BYREF
  NiD3DTextureStage *v865; // [esp+370h] [ebp-28h] BYREF
  NiD3DTextureStage *v866; // [esp+374h] [ebp-24h] BYREF
  NiD3DTextureStage *v867; // [esp+378h] [ebp-20h] BYREF
  NiD3DTextureStage *v868; // [esp+37Ch] [ebp-1Ch] BYREF
  NiD3DTextureStage *v869; // [esp+380h] [ebp-18h] BYREF
  NiD3DTextureStage *v870; // [esp+384h] [ebp-14h] BYREF
  NiD3DTextureStage *v871; // [esp+388h] [ebp-10h] BYREF
  unsigned int v872; // [esp+394h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v651 = 0;
  v872 = 0;
  a3 = 0;
  v2 = dword_B45778;
  v3 = dword_B45778 == 0;
  LOBYTE(v872) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v651 = (NiD3DPassVtbl **)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 8 )
  {
    v4 = (unsigned int **)sub_772630(&v816);
    if ( *v4 )
    {
      v1 = (NiD3DTextureStage *)*v4;
      a3 = *v4;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v5 = v816;
    LOBYTE(v872) = 1;
    if ( v816 )
    {
      --v816[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v654);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v872) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v6;
      a3 = *v6;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v7 = v654;
    LOBYTE(v872) = 1;
    if ( v654 )
    {
      --v654[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v8 = (unsigned int **)sub_772630(&v844);
    v3 = v1 == (NiD3DTextureStage *)*v8;
    LOBYTE(v872) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v8;
      a3 = *v8;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v9 = v844;
    LOBYTE(v872) = 1;
    if ( v844 )
    {
      --v844[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v10 = (unsigned int **)sub_772630(&v656);
    v3 = v1 == (NiD3DTextureStage *)*v10;
    LOBYTE(v872) = 5;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v10;
      a3 = *v10;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v11 = v656;
    LOBYTE(v872) = 1;
    if ( v656 )
    {
      --v656[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v12 = (unsigned int **)sub_772630(&v764);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v872) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v12;
      a3 = *v12;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v13 = v764;
    LOBYTE(v872) = 1;
    if ( v764 )
    {
      --v764[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v658);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v872) = 7;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v14;
      a3 = *v14;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v15 = v658;
    LOBYTE(v872) = 1;
    if ( v658 )
    {
      --v658[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, &v1->Stage);
    v16 = (unsigned int **)sub_772630(&v818);
    v3 = v1 == (NiD3DTextureStage *)*v16;
    LOBYTE(v872) = 8;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v16;
      a3 = *v16;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v17 = v818;
    LOBYTE(v872) = 1;
    if ( v818 )
    {
      --v818[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 6, 1, 2);
    sub_760010(v0, 6u, &v1->Stage);
    v18 = (unsigned int **)sub_772630(&v660);
    v3 = v1 == (NiD3DTextureStage *)*v18;
    LOBYTE(v872) = 9;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v18;
      a3 = *v18;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v19 = v660;
    LOBYTE(v872) = 1;
    if ( v660 )
    {
      --v660[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v21 = dword_B45364[0];
  if ( VertexShader != (NiD3DVertexShader *)dword_B45364[0] )
  {
    if ( VertexShader )
    {
      v22 = v0->VertexShader;
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
      {
        if ( v22 )
          (**(void (__thiscall ***)(NiD3DVertexShader *, int))v22)(v22, 1);
      }
    }
    v0->VertexShader = (NiD3DVertexShader *)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  PixelShader = v0->PixelShader;
  v24 = dword_B45144[0];
  if ( PixelShader != (NiD3DPixelShader *)dword_B45144[0] )
  {
    if ( PixelShader )
    {
      v25 = v0->PixelShader;
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
      {
        if ( v25 )
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1);
      }
    }
    v0->PixelShader = (NiD3DPixelShader *)v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B8C;
  dword_B43CF8 = 0x18082;
  dword_B44388 = 0x10C;
  dword_B43668 = 0x18000;
  dword_B44A18 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B8C;
    v651 = (NiD3DPassVtbl **)dword_B45B8C;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v26 = (unsigned int **)sub_772630(&v766);
    v3 = v1 == (NiD3DTextureStage *)*v26;
    LOBYTE(v872) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v26;
      a3 = *v26;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v27 = v766;
    LOBYTE(v872) = 1;
    if ( v766 )
    {
      --v766[7].Unk08;
      if ( !v27[7].Unk08 )
        sub_772560(v27);
    }
    sub_801110((int)v1, 0, 3, 2);
    sub_760010(v0, 0, &v1->Stage);
    v28 = (unsigned int **)sub_772630(&v662);
    v3 = v1 == (NiD3DTextureStage *)*v28;
    LOBYTE(v872) = 0xB;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v28;
      a3 = *v28;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v29 = v662;
    LOBYTE(v872) = 1;
    if ( v662 )
    {
      --v662[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 1, 3, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v30 = (unsigned int **)sub_772630(&v858);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v872) = 0xC;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v30;
      a3 = *v30;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v31 = v858;
    LOBYTE(v872) = 1;
    if ( v858 )
    {
      --v858[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v32 = sub_772630(&v664);
    LOBYTE(v872) = 0xD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v32);
    v33 = v664;
    LOBYTE(v872) = 1;
    if ( v664 )
    {
      --v664[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    v34 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v34);
    v35 = sub_772630(&v768);
    LOBYTE(v872) = 0xE;
    sub_75FAE0((NiD3DTextureStage **)&a3, v35);
    v36 = v768;
    LOBYTE(v872) = 1;
    if ( v768 )
    {
      --v768[7].Unk08;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    v37 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v37);
    v38 = sub_772630(&v666);
    LOBYTE(v872) = 0xF;
    sub_75FAE0((NiD3DTextureStage **)&a3, v38);
    v39 = v666;
    LOBYTE(v872) = 1;
    if ( v666 )
    {
      --v666[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    v40 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v40, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v40);
    v41 = sub_772630(&v820);
    LOBYTE(v872) = 0x10;
    sub_75FAE0((NiD3DTextureStage **)&a3, v41);
    v42 = v820;
    LOBYTE(v872) = 1;
    if ( v820 )
    {
      --v820[7].Unk08;
      if ( !v42[7].Unk08 )
        sub_772560(v42);
    }
    v43 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v43);
    v44 = sub_772630(&v668);
    LOBYTE(v872) = 0x11;
    sub_75FAE0((NiD3DTextureStage **)&a3, v44);
    v45 = v668;
    LOBYTE(v872) = 1;
    if ( v668 )
    {
      --v668[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4537C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4515C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4577C;
  dword_B4410C = 0x18082;
  dword_B4479C = 0x10C;
  dword_B43A7C = 0x18000;
  dword_B44E2C = 0x108;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4577C;
    v651 = (NiD3DPassVtbl **)dword_B4577C;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v46 = sub_772630(&v770);
    LOBYTE(v872) = 0x12;
    sub_75FAE0((NiD3DTextureStage **)&a3, v46);
    v47 = v770;
    LOBYTE(v872) = 1;
    if ( v770 )
    {
      --v770[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    v48 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v48);
    v49 = sub_772630(&v670);
    LOBYTE(v872) = 0x13;
    sub_75FAE0((NiD3DTextureStage **)&a3, v49);
    v50 = v670;
    LOBYTE(v872) = 1;
    if ( v670 )
    {
      --v670[7].Unk08;
      if ( !v50[7].Unk08 )
        sub_772560(v50);
    }
    v51 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v51);
    v52 = sub_772630(&v846);
    LOBYTE(v872) = 0x14;
    sub_75FAE0((NiD3DTextureStage **)&a3, v52);
    v53 = v846;
    LOBYTE(v872) = 1;
    if ( v846 )
    {
      --v846[7].Unk08;
      if ( !v53[7].Unk08 )
        sub_772560(v53);
    }
    v54 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v54);
    v55 = sub_772630(&v672);
    LOBYTE(v872) = 0x15;
    sub_75FAE0((NiD3DTextureStage **)&a3, v55);
    v56 = v672;
    LOBYTE(v872) = 1;
    if ( v672 )
    {
      --v672[7].Unk08;
      if ( !v56[7].Unk08 )
        sub_772560(v56);
    }
    v57 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v57);
    v58 = sub_772630(&v772);
    LOBYTE(v872) = 0x16;
    sub_75FAE0((NiD3DTextureStage **)&a3, v58);
    v59 = v772;
    LOBYTE(v872) = 1;
    if ( v772 )
    {
      --v772[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    v60 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v60);
    v61 = sub_772630(&v674);
    LOBYTE(v872) = 0x17;
    sub_75FAE0((NiD3DTextureStage **)&a3, v61);
    v62 = v674;
    LOBYTE(v872) = 1;
    if ( v674 )
    {
      --v674[7].Unk08;
      if ( !v62[7].Unk08 )
        sub_772560(v62);
    }
    v63 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v63, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v63);
    v64 = sub_772630(&v822);
    LOBYTE(v872) = 0x18;
    sub_75FAE0((NiD3DTextureStage **)&a3, v64);
    v65 = v822;
    LOBYTE(v872) = 1;
    if ( v822 )
    {
      --v822[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
    }
    v66 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v66);
    v67 = sub_772630(&v676);
    LOBYTE(v872) = 0x19;
    sub_75FAE0((NiD3DTextureStage **)&a3, v67);
    v68 = v676;
    LOBYTE(v872) = 1;
    if ( v676 )
    {
      --v676[7].Unk08;
      if ( !v68[7].Unk08 )
        sub_772560(v68);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45368);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45148);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45780;
  dword_B43CFC = 0xA018086;
  dword_B4438C = 0x10C;
  dword_B4366C = 0xA018084;
  dword_B44A1C = 0x10C;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45780;
    v651 = (NiD3DPassVtbl **)dword_B45780;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v69 = sub_772630(&v774);
    LOBYTE(v872) = 0x1A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v69);
    v70 = v774;
    LOBYTE(v872) = 1;
    if ( v774 )
    {
      --v774[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    v71 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v71);
    v72 = sub_772630(&v678);
    LOBYTE(v872) = 0x1B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v72);
    v73 = v678;
    LOBYTE(v872) = 1;
    if ( v678 )
    {
      --v678[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    v74 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v74);
    v75 = sub_772630(&v868);
    LOBYTE(v872) = 0x1C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v75);
    v76 = v868;
    LOBYTE(v872) = 1;
    if ( v868 )
    {
      --v868[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    v77 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v77);
    v78 = sub_772630(&v680);
    LOBYTE(v872) = 0x1D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v78);
    v79 = v680;
    LOBYTE(v872) = 1;
    if ( v680 )
    {
      --v680[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    v80 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v80);
    v81 = sub_772630(&v776);
    LOBYTE(v872) = 0x1E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v81);
    v82 = v776;
    LOBYTE(v872) = 1;
    if ( v776 )
    {
      --v776[7].Unk08;
      if ( !v82[7].Unk08 )
        sub_772560(v82);
    }
    v83 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v83);
    v84 = sub_772630(&v682);
    LOBYTE(v872) = 0x1F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v84);
    v85 = v682;
    LOBYTE(v872) = 1;
    if ( v682 )
    {
      --v682[7].Unk08;
      if ( !v85[7].Unk08 )
        sub_772560(v85);
    }
    v86 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v86, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v86);
    v87 = sub_772630(&v824);
    LOBYTE(v872) = 0x20;
    sub_75FAE0((NiD3DTextureStage **)&a3, v87);
    v88 = v824;
    LOBYTE(v872) = 1;
    if ( v824 )
    {
      --v824[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    v89 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v89);
    v90 = sub_772630(&v684);
    LOBYTE(v872) = 0x21;
    sub_75FAE0((NiD3DTextureStage **)&a3, v90);
    v91 = v684;
    LOBYTE(v872) = 1;
    if ( v684 )
    {
      --v684[7].Unk08;
      if ( !v91[7].Unk08 )
        sub_772560(v91);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45364[0]);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4514C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45790;
  dword_B43D00 = 0x18082;
  dword_B44390 = 0x18C;
  dword_B43670 = 0x18000;
  dword_B44A20 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45790;
    v651 = (NiD3DPassVtbl **)dword_B45790;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v92 = sub_772630(&v778);
    LOBYTE(v872) = 0x22;
    sub_75FAE0((NiD3DTextureStage **)&a3, v92);
    v93 = v778;
    LOBYTE(v872) = 1;
    if ( v778 )
    {
      --v778[7].Unk08;
      if ( !v93[7].Unk08 )
        sub_772560(v93);
    }
    v94 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v94);
    v95 = sub_772630(&v686);
    LOBYTE(v872) = 0x23;
    sub_75FAE0((NiD3DTextureStage **)&a3, v95);
    v96 = v686;
    LOBYTE(v872) = 1;
    if ( v686 )
    {
      --v686[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    v97 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v97);
    v98 = sub_772630(&v848);
    LOBYTE(v872) = 0x24;
    sub_75FAE0((NiD3DTextureStage **)&a3, v98);
    v99 = v848;
    LOBYTE(v872) = 1;
    if ( v848 )
    {
      --v848[7].Unk08;
      if ( !v99[7].Unk08 )
        sub_772560(v99);
    }
    v100 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v100);
    v101 = sub_772630(&v688);
    LOBYTE(v872) = 0x25;
    sub_75FAE0((NiD3DTextureStage **)&a3, v101);
    v102 = v688;
    LOBYTE(v872) = 1;
    if ( v688 )
    {
      --v688[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    v103 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v103);
    v104 = sub_772630(&v780);
    LOBYTE(v872) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v104);
    v105 = v780;
    LOBYTE(v872) = 1;
    if ( v780 )
    {
      --v780[7].Unk08;
      if ( !v105[7].Unk08 )
        sub_772560(v105);
    }
    v106 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v106);
    v107 = sub_772630(&v690);
    LOBYTE(v872) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v107);
    v108 = v690;
    LOBYTE(v872) = 1;
    if ( v690 )
    {
      --v690[7].Unk08;
      if ( !v108[7].Unk08 )
        sub_772560(v108);
    }
    v109 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v109, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v109);
    v110 = sub_772630(&v826);
    LOBYTE(v872) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v110);
    v111 = v826;
    LOBYTE(v872) = 1;
    if ( v826 )
    {
      --v826[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    v112 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v112);
    v113 = sub_772630(&v692);
    LOBYTE(v872) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v113);
    v114 = v692;
    LOBYTE(v872) = 1;
    if ( v692 )
    {
      --v692[7].Unk08;
      if ( !v114[7].Unk08 )
        sub_772560(v114);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45364[0]);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45160);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45794;
  dword_B43D10 = 0x18082;
  dword_B443A0 = 0x18C;
  dword_B43680 = 0x18000;
  dword_B44A30 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45794;
    v651 = (NiD3DPassVtbl **)dword_B45794;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v115 = sub_772630(&v782);
    LOBYTE(v872) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v115);
    v116 = v782;
    LOBYTE(v872) = 1;
    if ( v782 )
    {
      --v782[7].Unk08;
      if ( !v116[7].Unk08 )
        sub_772560(v116);
    }
    v117 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v117);
    v118 = sub_772630(&v694);
    LOBYTE(v872) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v118);
    v119 = v694;
    LOBYTE(v872) = 1;
    if ( v694 )
    {
      --v694[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    v120 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v120);
    v121 = sub_772630(&v860);
    LOBYTE(v872) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v860;
    LOBYTE(v872) = 1;
    if ( v860 )
    {
      --v860[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v123 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v123);
    v124 = sub_772630(&v696);
    LOBYTE(v872) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v124);
    v125 = v696;
    LOBYTE(v872) = 1;
    if ( v696 )
    {
      --v696[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    v126 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v126);
    v127 = sub_772630(&v784);
    LOBYTE(v872) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v127);
    v128 = v784;
    LOBYTE(v872) = 1;
    if ( v784 )
    {
      --v784[7].Unk08;
      if ( !v128[7].Unk08 )
        sub_772560(v128);
    }
    v129 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v129);
    v130 = sub_772630(&v698);
    LOBYTE(v872) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v130);
    v131 = v698;
    LOBYTE(v872) = 1;
    if ( v698 )
    {
      --v698[7].Unk08;
      if ( !v131[7].Unk08 )
        sub_772560(v131);
    }
    v132 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v132, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v132);
    v133 = sub_772630(&v828);
    LOBYTE(v872) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v133);
    v134 = v828;
    LOBYTE(v872) = 1;
    if ( v828 )
    {
      --v828[7].Unk08;
      if ( !v134[7].Unk08 )
        sub_772560(v134);
    }
    v135 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v135);
    v136 = sub_772630(&v700);
    LOBYTE(v872) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v136);
    v137 = v700;
    LOBYTE(v872) = 1;
    if ( v700 )
    {
      --v700[7].Unk08;
      if ( !v137[7].Unk08 )
        sub_772560(v137);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4536C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45144[0]);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45798;
  dword_B43D14 = 0x58088;
  dword_B443A4 = 0x10C;
  dword_B43684 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45798;
    v651 = (NiD3DPassVtbl **)dword_B45798;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v138 = sub_772630(&v786);
    LOBYTE(v872) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v138);
    v139 = v786;
    LOBYTE(v872) = 1;
    if ( v786 )
    {
      --v786[7].Unk08;
      if ( !v139[7].Unk08 )
        sub_772560(v139);
    }
    v140 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v140);
    v141 = sub_772630(&v702);
    LOBYTE(v872) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v141);
    v142 = v702;
    LOBYTE(v872) = 1;
    if ( v702 )
    {
      --v702[7].Unk08;
      if ( !v142[7].Unk08 )
        sub_772560(v142);
    }
    v143 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v143);
    v144 = sub_772630(&v850);
    LOBYTE(v872) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v144);
    v145 = v850;
    LOBYTE(v872) = 1;
    if ( v850 )
    {
      --v850[7].Unk08;
      if ( !v145[7].Unk08 )
        sub_772560(v145);
    }
    v146 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v146);
    v147 = sub_772630(&v704);
    LOBYTE(v872) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v147);
    v148 = v704;
    LOBYTE(v872) = 1;
    if ( v704 )
    {
      --v704[7].Unk08;
      if ( !v148[7].Unk08 )
        sub_772560(v148);
    }
    v149 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v149);
    v150 = sub_772630(&v788);
    LOBYTE(v872) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v150);
    v151 = v788;
    LOBYTE(v872) = 1;
    if ( v788 )
    {
      --v788[7].Unk08;
      if ( !v151[7].Unk08 )
        sub_772560(v151);
    }
    v152 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v152);
    v153 = sub_772630(&v706);
    LOBYTE(v872) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v153);
    v154 = v706;
    LOBYTE(v872) = 1;
    if ( v706 )
    {
      --v706[7].Unk08;
      if ( !v154[7].Unk08 )
        sub_772560(v154);
    }
    v155 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v155, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v155);
    v156 = sub_772630(&v830);
    LOBYTE(v872) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v156);
    v157 = v830;
    LOBYTE(v872) = 1;
    if ( v830 )
    {
      --v830[7].Unk08;
      if ( !v157[7].Unk08 )
        sub_772560(v157);
    }
    v158 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v158);
    v159 = sub_772630(&v708);
    LOBYTE(v872) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v159);
    v160 = v708;
    LOBYTE(v872) = 1;
    if ( v708 )
    {
      --v708[7].Unk08;
      if ( !v160[7].Unk08 )
        sub_772560(v160);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4536C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4514C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B457AC;
  dword_B43D18 = 0x58088;
  dword_B443A8 = 0x18C;
  dword_B43688 = 0x18000;
  dword_B44A38 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B457AC;
    v651 = (NiD3DPassVtbl **)dword_B457AC;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v161 = sub_772630(&v790);
    LOBYTE(v872) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v161);
    v162 = v790;
    LOBYTE(v872) = 1;
    if ( v790 )
    {
      --v790[7].Unk08;
      if ( !v162[7].Unk08 )
        sub_772560(v162);
    }
    v163 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v163);
    v164 = sub_772630(&v710);
    LOBYTE(v872) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v164);
    v165 = v710;
    LOBYTE(v872) = 1;
    if ( v710 )
    {
      --v710[7].Unk08;
      if ( !v165[7].Unk08 )
        sub_772560(v165);
    }
    v166 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v166);
    v167 = sub_772630(&v866);
    LOBYTE(v872) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v167);
    v168 = v866;
    LOBYTE(v872) = 1;
    if ( v866 )
    {
      --v866[7].Unk08;
      if ( !v168[7].Unk08 )
        sub_772560(v168);
    }
    v169 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v169);
    v170 = sub_772630(&v712);
    LOBYTE(v872) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v170);
    v171 = v712;
    LOBYTE(v872) = 1;
    if ( v712 )
    {
      --v712[7].Unk08;
      if ( !v171[7].Unk08 )
        sub_772560(v171);
    }
    v172 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v172);
    v173 = sub_772630(&v792);
    LOBYTE(v872) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v173);
    v174 = v792;
    LOBYTE(v872) = 1;
    if ( v792 )
    {
      --v792[7].Unk08;
      if ( !v174[7].Unk08 )
        sub_772560(v174);
    }
    v175 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v175);
    v176 = sub_772630(&v714);
    LOBYTE(v872) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v176);
    v177 = v714;
    LOBYTE(v872) = 1;
    if ( v714 )
    {
      --v714[7].Unk08;
      if ( !v177[7].Unk08 )
        sub_772560(v177);
    }
    v178 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v178, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v178);
    v179 = sub_772630(&v832);
    LOBYTE(v872) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v179);
    v180 = v832;
    LOBYTE(v872) = 1;
    if ( v832 )
    {
      --v832[7].Unk08;
      if ( !v180[7].Unk08 )
        sub_772560(v180);
    }
    v181 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v181);
    v182 = sub_772630(&v716);
    LOBYTE(v872) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v182);
    v183 = v716;
    LOBYTE(v872) = 1;
    if ( v716 )
    {
      --v716[7].Unk08;
      if ( !v183[7].Unk08 )
        sub_772560(v183);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4536C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45160);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B457B0;
  dword_B43D2C = 0x58088;
  dword_B443BC = 0x18C;
  dword_B4369C = 0x18000;
  dword_B44A4C = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B457B0;
    v651 = (NiD3DPassVtbl **)dword_B457B0;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v184 = sub_772630(&v794);
    LOBYTE(v872) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v184);
    v185 = v794;
    LOBYTE(v872) = 1;
    if ( v794 )
    {
      --v794[7].Unk08;
      if ( !v185[7].Unk08 )
        sub_772560(v185);
    }
    v186 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v186);
    v187 = sub_772630(&v718);
    LOBYTE(v872) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v187);
    v188 = v718;
    LOBYTE(v872) = 1;
    if ( v718 )
    {
      --v718[7].Unk08;
      if ( !v188[7].Unk08 )
        sub_772560(v188);
    }
    v189 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v189);
    v190 = sub_772630(&v852);
    LOBYTE(v872) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v190);
    v191 = v852;
    LOBYTE(v872) = 1;
    if ( v852 )
    {
      --v852[7].Unk08;
      if ( !v191[7].Unk08 )
        sub_772560(v191);
    }
    v192 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v192);
    v193 = sub_772630(&v720);
    LOBYTE(v872) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v193);
    v194 = v720;
    LOBYTE(v872) = 1;
    if ( v720 )
    {
      --v720[7].Unk08;
      if ( !v194[7].Unk08 )
        sub_772560(v194);
    }
    v195 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v195);
    v196 = sub_772630(&v796);
    LOBYTE(v872) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v196);
    v197 = v796;
    LOBYTE(v872) = 1;
    if ( v796 )
    {
      --v796[7].Unk08;
      if ( !v197[7].Unk08 )
        sub_772560(v197);
    }
    v198 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v198);
    v199 = sub_772630(&v722);
    LOBYTE(v872) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v199);
    v200 = v722;
    LOBYTE(v872) = 1;
    if ( v722 )
    {
      --v722[7].Unk08;
      if ( !v200[7].Unk08 )
        sub_772560(v200);
    }
    v201 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v201, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v201);
    v202 = sub_772630(&v834);
    LOBYTE(v872) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v202);
    v203 = v834;
    LOBYTE(v872) = 1;
    if ( v834 )
    {
      --v834[7].Unk08;
      if ( !v203[7].Unk08 )
        sub_772560(v203);
    }
    v204 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v204);
    v205 = sub_772630(&v724);
    LOBYTE(v872) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v205);
    v206 = v724;
    LOBYTE(v872) = 1;
    if ( v724 )
    {
      --v724[7].Unk08;
      if ( !v206[7].Unk08 )
        sub_772560(v206);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45370);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45150);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B457B4;
  dword_B43D30 = 0x180F2;
  dword_B443C0 = 0x10C;
  dword_B436A0 = 0x18060;
  dword_B44A50 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B457B4;
    v651 = (NiD3DPassVtbl **)dword_B457B4;
    if ( v651 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v207 = sub_772630(&v798);
    LOBYTE(v872) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v207);
    v208 = v798;
    LOBYTE(v872) = 1;
    if ( v798 )
    {
      --v798[7].Unk08;
      if ( !v208[7].Unk08 )
        sub_772560(v208);
    }
    v209 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v209);
    v210 = sub_772630(&v726);
    LOBYTE(v872) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v210);
    v211 = v726;
    LOBYTE(v872) = 1;
    if ( v726 )
    {
      --v726[7].Unk08;
      if ( !v211[7].Unk08 )
        sub_772560(v211);
    }
    v212 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v212);
    v213 = sub_772630(&v862);
    LOBYTE(v872) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v213);
    v214 = v862;
    LOBYTE(v872) = 1;
    if ( v862 )
    {
      --v862[7].Unk08;
      if ( !v214[7].Unk08 )
        sub_772560(v214);
    }
    v215 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v215);
    v216 = sub_772630(&v728);
    LOBYTE(v872) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v216);
    v217 = v728;
    LOBYTE(v872) = 1;
    if ( v728 )
    {
      --v728[7].Unk08;
      if ( !v217[7].Unk08 )
        sub_772560(v217);
    }
    v218 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v218);
    v219 = sub_772630(&v800);
    LOBYTE(v872) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v219);
    v220 = v800;
    LOBYTE(v872) = 1;
    if ( v800 )
    {
      --v800[7].Unk08;
      if ( !v220[7].Unk08 )
        sub_772560(v220);
    }
    v221 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v221);
    v222 = sub_772630(&v730);
    LOBYTE(v872) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v222);
    v223 = v730;
    LOBYTE(v872) = 1;
    if ( v730 )
    {
      --v730[7].Unk08;
      if ( !v223[7].Unk08 )
        sub_772560(v223);
    }
    v224 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v224, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v224);
    v225 = sub_772630(&v836);
    LOBYTE(v872) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v225);
    v226 = v836;
    LOBYTE(v872) = 1;
    if ( v836 )
    {
      --v836[7].Unk08;
      if ( !v226[7].Unk08 )
        sub_772560(v226);
    }
    v227 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v227);
    v228 = sub_772630(&v732);
    LOBYTE(v872) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v228);
    v229 = v732;
    LOBYTE(v872) = 1;
    if ( v732 )
    {
      --v732[7].Unk08;
      if ( !v229[7].Unk08 )
        sub_772560(v229);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45374);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45154);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B43D34 = 0xA0180F2;
  dword_B443C4 = 0x10C;
  dword_B436A4 = 0xA018060;
  dword_B44A54 = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B457B8);
  v230 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v231 = sub_772630(&v802);
    LOBYTE(v872) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v231);
    v232 = v802;
    LOBYTE(v872) = 1;
    if ( v802 )
    {
      --v802[7].Unk08;
      if ( !v232[7].Unk08 )
        sub_772560(v232);
    }
    v233 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v230, 0, v233);
    v234 = sub_772630(&v734);
    LOBYTE(v872) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v234);
    v235 = v734;
    LOBYTE(v872) = 1;
    if ( v734 )
    {
      --v734[7].Unk08;
      if ( !v235[7].Unk08 )
        sub_772560(v235);
    }
    v236 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v230, 1u, v236);
    v237 = sub_772630(&v854);
    LOBYTE(v872) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v237);
    v238 = v854;
    LOBYTE(v872) = 1;
    if ( v854 )
    {
      --v854[7].Unk08;
      if ( !v238[7].Unk08 )
        sub_772560(v238);
    }
    v239 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v230, 2u, v239);
    v240 = sub_772630(&v736);
    LOBYTE(v872) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v240);
    v241 = v736;
    LOBYTE(v872) = 1;
    if ( v736 )
    {
      --v736[7].Unk08;
      if ( !v241[7].Unk08 )
        sub_772560(v241);
    }
    v242 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v230, 3u, v242);
    v243 = sub_772630(&v804);
    LOBYTE(v872) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v243);
    v244 = v804;
    LOBYTE(v872) = 1;
    if ( v804 )
    {
      --v804[7].Unk08;
      if ( !v244[7].Unk08 )
        sub_772560(v244);
    }
    v245 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v230, 4u, v245);
    v246 = sub_772630(&v738);
    LOBYTE(v872) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v246);
    v247 = v738;
    LOBYTE(v872) = 1;
    if ( v738 )
    {
      --v738[7].Unk08;
      if ( !v247[7].Unk08 )
        sub_772560(v247);
    }
    v248 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v248, (NiRenderedTexture *)dword_B43110);
    sub_760010(v230, 5u, v248);
    v249 = sub_772630(&v838);
    LOBYTE(v872) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v249);
    v250 = v838;
    LOBYTE(v872) = 1;
    if ( v838 )
    {
      --v838[7].Unk08;
      if ( !v250[7].Unk08 )
        sub_772560(v250);
    }
    v251 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v230, 6u, v251);
    v252 = sub_772630(&v740);
    LOBYTE(v872) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v252);
    v253 = v740;
    LOBYTE(v872) = 1;
    if ( v740 )
    {
      --v740[7].Unk08;
      if ( !v253[7].Unk08 )
        sub_772560(v253);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v230, 7u, &v1->Stage);
  }
  sub_7AECB0(v230, (NiD3DVertexShader *)dword_B45370);
  sub_7AEC60(&v230->__vftable, (NiD3DPixelShader *)dword_B45158);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 0x1B, 0, 0);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 0xF, 0, 0);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 7, 1, 0);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 0x17, 4, 0);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 0xE, 1, 0);
  if ( !v230->RenderStateGroup )
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v230->RenderStateGroup, 0x34, 0, 0);
  dword_B43D38 = 0x180F2;
  dword_B443C8 = 0x18C;
  dword_B436A8 = 0x18060;
  dword_B44A58 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B457C8);
  v254 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v255 = sub_772630(&v806);
    LOBYTE(v872) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v255);
    v256 = v806;
    LOBYTE(v872) = 1;
    if ( v806 )
    {
      --v806[7].Unk08;
      if ( !v256[7].Unk08 )
        sub_772560(v256);
    }
    v257 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v254, 0, v257);
    v258 = sub_772630(&v742);
    LOBYTE(v872) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v258);
    v259 = v742;
    LOBYTE(v872) = 1;
    if ( v742 )
    {
      --v742[7].Unk08;
      if ( !v259[7].Unk08 )
        sub_772560(v259);
    }
    v260 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v254, 1u, v260);
    v261 = sub_772630(&v870);
    LOBYTE(v872) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v261);
    v262 = v870;
    LOBYTE(v872) = 1;
    if ( v870 )
    {
      --v870[7].Unk08;
      if ( !v262[7].Unk08 )
        sub_772560(v262);
    }
    v263 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v254, 2u, v263);
    v264 = sub_772630(&v744);
    LOBYTE(v872) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v264);
    v265 = v744;
    LOBYTE(v872) = 1;
    if ( v744 )
    {
      --v744[7].Unk08;
      if ( !v265[7].Unk08 )
        sub_772560(v265);
    }
    v266 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v254, 3u, v266);
    v267 = sub_772630(&v808);
    LOBYTE(v872) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v267);
    v268 = v808;
    LOBYTE(v872) = 1;
    if ( v808 )
    {
      --v808[7].Unk08;
      if ( !v268[7].Unk08 )
        sub_772560(v268);
    }
    v269 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v254, 4u, v269);
    v270 = sub_772630(&v746);
    LOBYTE(v872) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v270);
    v271 = v746;
    LOBYTE(v872) = 1;
    if ( v746 )
    {
      --v746[7].Unk08;
      if ( !v271[7].Unk08 )
        sub_772560(v271);
    }
    v272 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v272, (NiRenderedTexture *)dword_B43110);
    sub_760010(v254, 5u, v272);
    v273 = sub_772630(&v840);
    LOBYTE(v872) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v273);
    v274 = v840;
    LOBYTE(v872) = 1;
    if ( v840 )
    {
      --v840[7].Unk08;
      if ( !v274[7].Unk08 )
        sub_772560(v274);
    }
    v275 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v254, 6u, v275);
    v276 = sub_772630(&v748);
    LOBYTE(v872) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v276);
    v277 = v748;
    LOBYTE(v872) = 1;
    if ( v748 )
    {
      --v748[7].Unk08;
      if ( !v277[7].Unk08 )
        sub_772560(v277);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v254, 7u, &v1->Stage);
  }
  sub_7AECB0(v254, (NiD3DVertexShader *)dword_B45370);
  sub_7AEC60(&v254->__vftable, (NiD3DPixelShader *)dword_B45164);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 0x1B, 0, 0);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 0xF, 0, 0);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 7, 1, 0);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 0x17, 4, 0);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 0xE, 1, 0);
  if ( !v254->RenderStateGroup )
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v254->RenderStateGroup, 0x34, 0, 0);
  dword_B43D48 = 0x180F2;
  dword_B443D8 = 0x18C;
  dword_B436B8 = 0x18060;
  dword_B44A68 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B457CC);
  v278 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v279 = sub_772630(&v810);
    LOBYTE(v872) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v279);
    v280 = v810;
    LOBYTE(v872) = 1;
    if ( v810 )
    {
      --v810[7].Unk08;
      if ( !v280[7].Unk08 )
        sub_772560(v280);
    }
    v281 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v278, 0, v281);
    v282 = sub_772630(&v750);
    LOBYTE(v872) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v282);
    v283 = v750;
    LOBYTE(v872) = 1;
    if ( v750 )
    {
      --v750[7].Unk08;
      if ( !v283[7].Unk08 )
        sub_772560(v283);
    }
    v284 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v278, 1u, v284);
    v285 = sub_772630(&v856);
    LOBYTE(v872) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v285);
    v286 = v856;
    LOBYTE(v872) = 1;
    if ( v856 )
    {
      --v856[7].Unk08;
      if ( !v286[7].Unk08 )
        sub_772560(v286);
    }
    v287 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v278, 2u, v287);
    v288 = sub_772630(&v752);
    LOBYTE(v872) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v288);
    v289 = v752;
    LOBYTE(v872) = 1;
    if ( v752 )
    {
      --v752[7].Unk08;
      if ( !v289[7].Unk08 )
        sub_772560(v289);
    }
    v290 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v278, 3u, v290);
    v291 = sub_772630(&v812);
    LOBYTE(v872) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v291);
    v292 = v812;
    LOBYTE(v872) = 1;
    if ( v812 )
    {
      --v812[7].Unk08;
      if ( !v292[7].Unk08 )
        sub_772560(v292);
    }
    v293 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v278, 4u, v293);
    v294 = sub_772630(&v754);
    LOBYTE(v872) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v294);
    v295 = v754;
    LOBYTE(v872) = 1;
    if ( v754 )
    {
      --v754[7].Unk08;
      if ( !v295[7].Unk08 )
        sub_772560(v295);
    }
    v296 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v296, (NiRenderedTexture *)dword_B43110);
    sub_760010(v278, 5u, v296);
    v297 = sub_772630(&v842);
    LOBYTE(v872) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v297);
    v298 = v842;
    LOBYTE(v872) = 1;
    if ( v842 )
    {
      --v842[7].Unk08;
      if ( !v298[7].Unk08 )
        sub_772560(v298);
    }
    v299 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v278, 6u, v299);
    v300 = sub_772630(&v756);
    LOBYTE(v872) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v300);
    v301 = v756;
    LOBYTE(v872) = 1;
    if ( v756 )
    {
      --v756[7].Unk08;
      if ( !v301[7].Unk08 )
        sub_772560(v301);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v278, 7u, &v1->Stage);
  }
  sub_7AECB0(v278, (NiD3DVertexShader *)dword_B45378);
  sub_7AEC60(&v278->__vftable, (NiD3DPixelShader *)dword_B45150);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 0x1B, 0, 0);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 0xF, 0, 0);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 7, 1, 0);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 0x17, 4, 0);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 0xE, 1, 0);
  if ( !v278->RenderStateGroup )
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v278->RenderStateGroup, 0x34, 0, 0);
  dword_B43D4C = 0x580F8;
  dword_B443DC = 0x10C;
  dword_B436BC = 0x18060;
  dword_B44A6C = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B457D0);
  v302 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v303 = sub_772630(&v814);
    LOBYTE(v872) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v303);
    v304 = v814;
    LOBYTE(v872) = 1;
    if ( v814 )
    {
      --v814[7].Unk08;
      if ( !v304[7].Unk08 )
        sub_772560(v304);
    }
    v305 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v302, 0, v305);
    v306 = sub_772630(&v758);
    LOBYTE(v872) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v306);
    v307 = v758;
    LOBYTE(v872) = 1;
    if ( v758 )
    {
      --v758[7].Unk08;
      if ( !v307[7].Unk08 )
        sub_772560(v307);
    }
    v308 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v302, 1u, v308);
    v309 = sub_772630(&v864);
    LOBYTE(v872) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v309);
    v310 = v864;
    LOBYTE(v872) = 1;
    if ( v864 )
    {
      --v864[7].Unk08;
      if ( !v310[7].Unk08 )
        sub_772560(v310);
    }
    v311 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v302, 2u, v311);
    v312 = sub_772630(&v760);
    LOBYTE(v872) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v312);
    v313 = v760;
    LOBYTE(v872) = 1;
    if ( v760 )
    {
      --v760[7].Unk08;
      if ( !v313[7].Unk08 )
        sub_772560(v313);
    }
    v314 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v302, 3u, v314);
    v315 = sub_772630(&v652);
    LOBYTE(v872) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v315);
    v316 = v652;
    LOBYTE(v872) = 1;
    if ( v652 )
    {
      --v652[7].Unk08;
      if ( !v316[7].Unk08 )
        sub_772560(v316);
    }
    v317 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v302, 4u, v317);
    v318 = sub_772630(&v762);
    LOBYTE(v872) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v318);
    v319 = v762;
    LOBYTE(v872) = 1;
    if ( v762 )
    {
      --v762[7].Unk08;
      if ( !v319[7].Unk08 )
        sub_772560(v319);
    }
    v320 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v320, (NiRenderedTexture *)dword_B43110);
    sub_760010(v302, 5u, v320);
    v321 = sub_772630(&v653);
    LOBYTE(v872) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v321);
    v322 = v653;
    LOBYTE(v872) = 1;
    if ( v653 )
    {
      --v653[7].Unk08;
      if ( !v322[7].Unk08 )
        sub_772560(v322);
    }
    v323 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v302, 6u, v323);
    v324 = sub_772630(&v655);
    LOBYTE(v872) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v324);
    v325 = v655;
    LOBYTE(v872) = 1;
    if ( v655 )
    {
      --v655[7].Unk08;
      if ( !v325[7].Unk08 )
        sub_772560(v325);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v302, 7u, &v1->Stage);
  }
  sub_7AECB0(v302, (NiD3DVertexShader *)dword_B45378);
  sub_7AEC60(&v302->__vftable, (NiD3DPixelShader *)dword_B45158);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 0x1B, 0, 0);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 0xF, 0, 0);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 7, 1, 0);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 0x17, 4, 0);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 0xE, 1, 0);
  if ( !v302->RenderStateGroup )
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v302->RenderStateGroup, 0x34, 0, 0);
  dword_B43D50 = 0x580F8;
  dword_B443E0 = 0x18C;
  dword_B436C0 = 0x18060;
  dword_B44A70 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B457E4);
  v326 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v327 = sub_772630(&v657);
    LOBYTE(v872) = 0x72;
    sub_75FAE0((NiD3DTextureStage **)&a3, v327);
    v328 = v657;
    LOBYTE(v872) = 1;
    if ( v657 )
    {
      --v657[7].Unk08;
      if ( !v328[7].Unk08 )
        sub_772560(v328);
    }
    v329 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v326, 0, v329);
    v330 = sub_772630(&v659);
    LOBYTE(v872) = 0x73;
    sub_75FAE0((NiD3DTextureStage **)&a3, v330);
    v331 = v659;
    LOBYTE(v872) = 1;
    if ( v659 )
    {
      --v659[7].Unk08;
      if ( !v331[7].Unk08 )
        sub_772560(v331);
    }
    v332 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v326, 1u, v332);
    v333 = sub_772630(&v661);
    LOBYTE(v872) = 0x74;
    sub_75FAE0((NiD3DTextureStage **)&a3, v333);
    v334 = v661;
    LOBYTE(v872) = 1;
    if ( v661 )
    {
      --v661[7].Unk08;
      if ( !v334[7].Unk08 )
        sub_772560(v334);
    }
    v335 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v326, 2u, v335);
    v336 = sub_772630(&v663);
    LOBYTE(v872) = 0x75;
    sub_75FAE0((NiD3DTextureStage **)&a3, v336);
    v337 = v663;
    LOBYTE(v872) = 1;
    if ( v663 )
    {
      --v663[7].Unk08;
      if ( !v337[7].Unk08 )
        sub_772560(v337);
    }
    v338 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v326, 3u, v338);
    v339 = sub_772630(&v665);
    LOBYTE(v872) = 0x76;
    sub_75FAE0((NiD3DTextureStage **)&a3, v339);
    v340 = v665;
    LOBYTE(v872) = 1;
    if ( v665 )
    {
      --v665[7].Unk08;
      if ( !v340[7].Unk08 )
        sub_772560(v340);
    }
    v341 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v326, 4u, v341);
    v342 = sub_772630(&v667);
    LOBYTE(v872) = 0x77;
    sub_75FAE0((NiD3DTextureStage **)&a3, v342);
    v343 = v667;
    LOBYTE(v872) = 1;
    if ( v667 )
    {
      --v667[7].Unk08;
      if ( !v343[7].Unk08 )
        sub_772560(v343);
    }
    v344 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v344, (NiRenderedTexture *)dword_B43110);
    sub_760010(v326, 5u, v344);
    v345 = sub_772630(&v669);
    LOBYTE(v872) = 0x78;
    sub_75FAE0((NiD3DTextureStage **)&a3, v345);
    v346 = v669;
    LOBYTE(v872) = 1;
    if ( v669 )
    {
      --v669[7].Unk08;
      if ( !v346[7].Unk08 )
        sub_772560(v346);
    }
    v347 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v326, 6u, v347);
    v348 = sub_772630(&v671);
    LOBYTE(v872) = 0x79;
    sub_75FAE0((NiD3DTextureStage **)&a3, v348);
    v349 = v671;
    LOBYTE(v872) = 1;
    if ( v671 )
    {
      --v671[7].Unk08;
      if ( !v349[7].Unk08 )
        sub_772560(v349);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v326, 7u, &v1->Stage);
  }
  sub_7AECB0(v326, (NiD3DVertexShader *)dword_B45378);
  sub_7AEC60(&v326->__vftable, (NiD3DPixelShader *)dword_B45164);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 0x1B, 0, 0);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 0xF, 0, 0);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 7, 1, 0);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 0x17, 4, 0);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 0xE, 1, 0);
  if ( !v326->RenderStateGroup )
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v326->RenderStateGroup, 0x34, 0, 0);
  dword_B43D64 = 0x580F8;
  dword_B443F4 = 0x18C;
  dword_B436D4 = 0x18060;
  dword_B44A84 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B457E8);
  v350 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v351 = sub_772630(&v673);
    LOBYTE(v872) = 0x7A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v351);
    v352 = v673;
    LOBYTE(v872) = 1;
    if ( v673 )
    {
      --v673[7].Unk08;
      if ( !v352[7].Unk08 )
        sub_772560(v352);
    }
    v353 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v350, 0, v353);
    v354 = sub_772630(&v675);
    LOBYTE(v872) = 0x7B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v354);
    v355 = v675;
    LOBYTE(v872) = 1;
    if ( v675 )
    {
      --v675[7].Unk08;
      if ( !v355[7].Unk08 )
        sub_772560(v355);
    }
    v356 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v350, 1u, v356);
    v357 = sub_772630(&v677);
    LOBYTE(v872) = 0x7C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v357);
    v358 = v677;
    LOBYTE(v872) = 1;
    if ( v677 )
    {
      --v677[7].Unk08;
      if ( !v358[7].Unk08 )
        sub_772560(v358);
    }
    v359 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v350, 2u, v359);
    v360 = sub_772630(&v679);
    LOBYTE(v872) = 0x7D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v360);
    v361 = v679;
    LOBYTE(v872) = 1;
    if ( v679 )
    {
      --v679[7].Unk08;
      if ( !v361[7].Unk08 )
        sub_772560(v361);
    }
    v362 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v350, 3u, v362);
    v363 = sub_772630(&v681);
    LOBYTE(v872) = 0x7E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v363);
    v364 = v681;
    LOBYTE(v872) = 1;
    if ( v681 )
    {
      --v681[7].Unk08;
      if ( !v364[7].Unk08 )
        sub_772560(v364);
    }
    v365 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v350, 4u, v365);
    v366 = sub_772630(&v683);
    LOBYTE(v872) = 0x7F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v366);
    v367 = v683;
    LOBYTE(v872) = 1;
    if ( v683 )
    {
      --v683[7].Unk08;
      if ( !v367[7].Unk08 )
        sub_772560(v367);
    }
    v368 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v368, (NiRenderedTexture *)dword_B43110);
    sub_760010(v350, 5u, v368);
    v369 = sub_772630(&v685);
    LOBYTE(v872) = 0x80;
    sub_75FAE0((NiD3DTextureStage **)&a3, v369);
    v370 = v685;
    LOBYTE(v872) = 1;
    if ( v685 )
    {
      --v685[7].Unk08;
      if ( !v370[7].Unk08 )
        sub_772560(v370);
    }
    v371 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v350, 6u, v371);
    v372 = sub_772630(&v687);
    LOBYTE(v872) = 0x81;
    sub_75FAE0((NiD3DTextureStage **)&a3, v372);
    v373 = v687;
    LOBYTE(v872) = 1;
    if ( v687 )
    {
      --v687[7].Unk08;
      if ( !v373[7].Unk08 )
        sub_772560(v373);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v350, 7u, &v1->Stage);
  }
  sub_7AECB0(v350, (NiD3DVertexShader *)dword_B45380);
  sub_7AEC60(&v350->__vftable, (NiD3DPixelShader *)dword_B45168);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 0x1B, 0, 0);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 0xF, 0, 0);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 7, 1, 0);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 0x17, 4, 0);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 0xE, 1, 0);
  if ( !v350->RenderStateGroup )
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v350->RenderStateGroup, 0x34, 0, 0);
  dword_B43D68 = 0x19082;
  dword_B443F8 = 0x11C;
  dword_B436D8 = 0x18000;
  dword_B44A88 = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B457EC);
  v374 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v375 = sub_772630(&v689);
    LOBYTE(v872) = 0x82;
    sub_75FAE0((NiD3DTextureStage **)&a3, v375);
    v376 = v689;
    LOBYTE(v872) = 1;
    if ( v689 )
    {
      --v689[7].Unk08;
      if ( !v376[7].Unk08 )
        sub_772560(v376);
    }
    v377 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v374, 0, v377);
    v378 = sub_772630(&v691);
    LOBYTE(v872) = 0x83;
    sub_75FAE0((NiD3DTextureStage **)&a3, v378);
    v379 = v691;
    LOBYTE(v872) = 1;
    if ( v691 )
    {
      --v691[7].Unk08;
      if ( !v379[7].Unk08 )
        sub_772560(v379);
    }
    v380 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v374, 1u, v380);
    v381 = sub_772630(&v693);
    LOBYTE(v872) = 0x84;
    sub_75FAE0((NiD3DTextureStage **)&a3, v381);
    v382 = v693;
    LOBYTE(v872) = 1;
    if ( v693 )
    {
      --v693[7].Unk08;
      if ( !v382[7].Unk08 )
        sub_772560(v382);
    }
    v383 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v374, 2u, v383);
    v384 = sub_772630(&v695);
    LOBYTE(v872) = 0x85;
    sub_75FAE0((NiD3DTextureStage **)&a3, v384);
    v385 = v695;
    LOBYTE(v872) = 1;
    if ( v695 )
    {
      --v695[7].Unk08;
      if ( !v385[7].Unk08 )
        sub_772560(v385);
    }
    v386 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v374, 3u, v386);
    v387 = sub_772630(&v697);
    LOBYTE(v872) = 0x86;
    sub_75FAE0((NiD3DTextureStage **)&a3, v387);
    v388 = v697;
    LOBYTE(v872) = 1;
    if ( v697 )
    {
      --v697[7].Unk08;
      if ( !v388[7].Unk08 )
        sub_772560(v388);
    }
    v389 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v374, 4u, v389);
    v390 = sub_772630(&v699);
    LOBYTE(v872) = 0x87;
    sub_75FAE0((NiD3DTextureStage **)&a3, v390);
    v391 = v699;
    LOBYTE(v872) = 1;
    if ( v699 )
    {
      --v699[7].Unk08;
      if ( !v391[7].Unk08 )
        sub_772560(v391);
    }
    v392 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v392, (NiRenderedTexture *)dword_B43110);
    sub_760010(v374, 5u, v392);
    v393 = sub_772630(&v701);
    LOBYTE(v872) = 0x88;
    sub_75FAE0((NiD3DTextureStage **)&a3, v393);
    v394 = v701;
    LOBYTE(v872) = 1;
    if ( v701 )
    {
      --v701[7].Unk08;
      if ( !v394[7].Unk08 )
        sub_772560(v394);
    }
    v395 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v374, 6u, v395);
    v396 = sub_772630(&v703);
    LOBYTE(v872) = 0x89;
    sub_75FAE0((NiD3DTextureStage **)&a3, v396);
    v397 = v703;
    LOBYTE(v872) = 1;
    if ( v703 )
    {
      --v703[7].Unk08;
      if ( !v397[7].Unk08 )
        sub_772560(v397);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v374, 7u, &v1->Stage);
  }
  sub_7AECB0(v374, (NiD3DVertexShader *)dword_B45380);
  sub_7AEC60(&v374->__vftable, (NiD3DPixelShader *)dword_B4516C);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 0x1B, 0, 0);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 0xF, 0, 0);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 7, 1, 0);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 0x17, 4, 0);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 0xE, 1, 0);
  if ( !v374->RenderStateGroup )
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v374->RenderStateGroup, 0x34, 0, 0);
  dword_B43D6C = 0x19082;
  dword_B443FC = 0x19C;
  dword_B436DC = 0x18000;
  dword_B44A8C = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B457FC);
  v398 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v399 = sub_772630(&v705);
    LOBYTE(v872) = 0x8A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v399);
    v400 = v705;
    LOBYTE(v872) = 1;
    if ( v705 )
    {
      --v705[7].Unk08;
      if ( !v400[7].Unk08 )
        sub_772560(v400);
    }
    v401 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v398, 0, v401);
    v402 = sub_772630(&v707);
    LOBYTE(v872) = 0x8B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v402);
    v403 = v707;
    LOBYTE(v872) = 1;
    if ( v707 )
    {
      --v707[7].Unk08;
      if ( !v403[7].Unk08 )
        sub_772560(v403);
    }
    v404 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v398, 1u, v404);
    v405 = sub_772630(&v709);
    LOBYTE(v872) = 0x8C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v405);
    v406 = v709;
    LOBYTE(v872) = 1;
    if ( v709 )
    {
      --v709[7].Unk08;
      if ( !v406[7].Unk08 )
        sub_772560(v406);
    }
    v407 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v398, 2u, v407);
    v408 = sub_772630(&v711);
    LOBYTE(v872) = 0x8D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v408);
    v409 = v711;
    LOBYTE(v872) = 1;
    if ( v711 )
    {
      --v711[7].Unk08;
      if ( !v409[7].Unk08 )
        sub_772560(v409);
    }
    v410 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v398, 3u, v410);
    v411 = sub_772630(&v713);
    LOBYTE(v872) = 0x8E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v411);
    v412 = v713;
    LOBYTE(v872) = 1;
    if ( v713 )
    {
      --v713[7].Unk08;
      if ( !v412[7].Unk08 )
        sub_772560(v412);
    }
    v413 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v398, 4u, v413);
    v414 = sub_772630(&v715);
    LOBYTE(v872) = 0x8F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v414);
    v415 = v715;
    LOBYTE(v872) = 1;
    if ( v715 )
    {
      --v715[7].Unk08;
      if ( !v415[7].Unk08 )
        sub_772560(v415);
    }
    v416 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v416, (NiRenderedTexture *)dword_B43110);
    sub_760010(v398, 5u, v416);
    v417 = sub_772630(&v717);
    LOBYTE(v872) = 0x90;
    sub_75FAE0((NiD3DTextureStage **)&a3, v417);
    v418 = v717;
    LOBYTE(v872) = 1;
    if ( v717 )
    {
      --v717[7].Unk08;
      if ( !v418[7].Unk08 )
        sub_772560(v418);
    }
    v419 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v398, 6u, v419);
    v420 = sub_772630(&v719);
    LOBYTE(v872) = 0x91;
    sub_75FAE0((NiD3DTextureStage **)&a3, v420);
    v421 = v719;
    LOBYTE(v872) = 1;
    if ( v719 )
    {
      --v719[7].Unk08;
      if ( !v421[7].Unk08 )
        sub_772560(v421);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v398, 7u, &v1->Stage);
  }
  sub_7AECB0(v398, (NiD3DVertexShader *)dword_B45380);
  sub_7AEC60(&v398->__vftable, (NiD3DPixelShader *)dword_B45170);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 0x1B, 0, 0);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 0xF, 0, 0);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 7, 1, 0);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 0x17, 4, 0);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 0xE, 1, 0);
  if ( !v398->RenderStateGroup )
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v398->RenderStateGroup, 0x34, 0, 0);
  dword_B43D7C = 0x19082;
  dword_B4440C = 0x19C;
  dword_B436EC = 0x18000;
  dword_B44A9C = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B45800);
  v422 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v423 = sub_772630(&v721);
    LOBYTE(v872) = 0x92;
    sub_75FAE0((NiD3DTextureStage **)&a3, v423);
    v424 = v721;
    LOBYTE(v872) = 1;
    if ( v721 )
    {
      --v721[7].Unk08;
      if ( !v424[7].Unk08 )
        sub_772560(v424);
    }
    v425 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v422, 0, v425);
    v426 = sub_772630(&v723);
    LOBYTE(v872) = 0x93;
    sub_75FAE0((NiD3DTextureStage **)&a3, v426);
    v427 = v723;
    LOBYTE(v872) = 1;
    if ( v723 )
    {
      --v723[7].Unk08;
      if ( !v427[7].Unk08 )
        sub_772560(v427);
    }
    v428 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v422, 1u, v428);
    v429 = sub_772630(&v725);
    LOBYTE(v872) = 0x94;
    sub_75FAE0((NiD3DTextureStage **)&a3, v429);
    v430 = v725;
    LOBYTE(v872) = 1;
    if ( v725 )
    {
      --v725[7].Unk08;
      if ( !v430[7].Unk08 )
        sub_772560(v430);
    }
    v431 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v422, 2u, v431);
    v432 = sub_772630(&v727);
    LOBYTE(v872) = 0x95;
    sub_75FAE0((NiD3DTextureStage **)&a3, v432);
    v433 = v727;
    LOBYTE(v872) = 1;
    if ( v727 )
    {
      --v727[7].Unk08;
      if ( !v433[7].Unk08 )
        sub_772560(v433);
    }
    v434 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v422, 3u, v434);
    v435 = sub_772630(&v729);
    LOBYTE(v872) = 0x96;
    sub_75FAE0((NiD3DTextureStage **)&a3, v435);
    v436 = v729;
    LOBYTE(v872) = 1;
    if ( v729 )
    {
      --v729[7].Unk08;
      if ( !v436[7].Unk08 )
        sub_772560(v436);
    }
    v437 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v422, 4u, v437);
    v438 = sub_772630(&v731);
    LOBYTE(v872) = 0x97;
    sub_75FAE0((NiD3DTextureStage **)&a3, v438);
    v439 = v731;
    LOBYTE(v872) = 1;
    if ( v731 )
    {
      --v731[7].Unk08;
      if ( !v439[7].Unk08 )
        sub_772560(v439);
    }
    v440 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v440, (NiRenderedTexture *)dword_B43110);
    sub_760010(v422, 5u, v440);
    v441 = sub_772630(&v733);
    LOBYTE(v872) = 0x98;
    sub_75FAE0((NiD3DTextureStage **)&a3, v441);
    v442 = v733;
    LOBYTE(v872) = 1;
    if ( v733 )
    {
      --v733[7].Unk08;
      if ( !v442[7].Unk08 )
        sub_772560(v442);
    }
    v443 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v422, 6u, v443);
    v444 = sub_772630(&v735);
    LOBYTE(v872) = 0x99;
    sub_75FAE0((NiD3DTextureStage **)&a3, v444);
    v445 = v735;
    LOBYTE(v872) = 1;
    if ( v735 )
    {
      --v735[7].Unk08;
      if ( !v445[7].Unk08 )
        sub_772560(v445);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v422, 7u, &v1->Stage);
  }
  sub_7AECB0(v422, (NiD3DVertexShader *)dword_B45384);
  sub_7AEC60(&v422->__vftable, (NiD3DPixelShader *)dword_B45168);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 0x1B, 0, 0);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 0xF, 0, 0);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 7, 1, 0);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 0x17, 4, 0);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 0xE, 1, 0);
  if ( !v422->RenderStateGroup )
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v422->RenderStateGroup, 0x34, 0, 0);
  dword_B43D80 = 0x59088;
  dword_B44410 = 0x11C;
  dword_B436F0 = 0x18000;
  dword_B44AA0 = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B45804);
  v446 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v447 = sub_772630(&v737);
    LOBYTE(v872) = 0x9A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v447);
    v448 = v737;
    LOBYTE(v872) = 1;
    if ( v737 )
    {
      --v737[7].Unk08;
      if ( !v448[7].Unk08 )
        sub_772560(v448);
    }
    v449 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v446, 0, v449);
    v450 = sub_772630(&v739);
    LOBYTE(v872) = 0x9B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v450);
    v451 = v739;
    LOBYTE(v872) = 1;
    if ( v739 )
    {
      --v739[7].Unk08;
      if ( !v451[7].Unk08 )
        sub_772560(v451);
    }
    v452 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v446, 1u, v452);
    v453 = sub_772630(&v741);
    LOBYTE(v872) = 0x9C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v453);
    v454 = v741;
    LOBYTE(v872) = 1;
    if ( v741 )
    {
      --v741[7].Unk08;
      if ( !v454[7].Unk08 )
        sub_772560(v454);
    }
    v455 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v446, 2u, v455);
    v456 = sub_772630(&v743);
    LOBYTE(v872) = 0x9D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v456);
    v457 = v743;
    LOBYTE(v872) = 1;
    if ( v743 )
    {
      --v743[7].Unk08;
      if ( !v457[7].Unk08 )
        sub_772560(v457);
    }
    v458 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v446, 3u, v458);
    v459 = sub_772630(&v745);
    LOBYTE(v872) = 0x9E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v459);
    v460 = v745;
    LOBYTE(v872) = 1;
    if ( v745 )
    {
      --v745[7].Unk08;
      if ( !v460[7].Unk08 )
        sub_772560(v460);
    }
    v461 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v446, 4u, v461);
    v462 = sub_772630(&v747);
    LOBYTE(v872) = 0x9F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v462);
    v463 = v747;
    LOBYTE(v872) = 1;
    if ( v747 )
    {
      --v747[7].Unk08;
      if ( !v463[7].Unk08 )
        sub_772560(v463);
    }
    v464 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v464, (NiRenderedTexture *)dword_B43110);
    sub_760010(v446, 5u, v464);
    v465 = sub_772630(&v749);
    LOBYTE(v872) = 0xA0;
    sub_75FAE0((NiD3DTextureStage **)&a3, v465);
    v466 = v749;
    LOBYTE(v872) = 1;
    if ( v749 )
    {
      --v749[7].Unk08;
      if ( !v466[7].Unk08 )
        sub_772560(v466);
    }
    v467 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v446, 6u, v467);
    v468 = sub_772630(&v751);
    LOBYTE(v872) = 0xA1;
    sub_75FAE0((NiD3DTextureStage **)&a3, v468);
    v469 = v751;
    LOBYTE(v872) = 1;
    if ( v751 )
    {
      --v751[7].Unk08;
      if ( !v469[7].Unk08 )
        sub_772560(v469);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v446, 7u, &v1->Stage);
  }
  sub_7AECB0(v446, (NiD3DVertexShader *)dword_B45384);
  sub_7AEC60(&v446->__vftable, (NiD3DPixelShader *)dword_B4516C);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 0x1B, 0, 0);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 0xF, 0, 0);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 7, 1, 0);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 0x17, 4, 0);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 0xE, 1, 0);
  if ( !v446->RenderStateGroup )
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v446->RenderStateGroup, 0x34, 0, 0);
  dword_B43D84 = 0x59088;
  dword_B44414 = 0x19C;
  dword_B436F4 = 0x18000;
  dword_B44AA4 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B45818);
  v470 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v471 = sub_772630(&v753);
    LOBYTE(v872) = 0xA2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v471);
    v472 = v753;
    LOBYTE(v872) = 1;
    if ( v753 )
    {
      --v753[7].Unk08;
      if ( !v472[7].Unk08 )
        sub_772560(v472);
    }
    v473 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v470, 0, v473);
    v474 = sub_772630(&v755);
    LOBYTE(v872) = 0xA3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v474);
    v475 = v755;
    LOBYTE(v872) = 1;
    if ( v755 )
    {
      --v755[7].Unk08;
      if ( !v475[7].Unk08 )
        sub_772560(v475);
    }
    v476 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v470, 1u, v476);
    v477 = sub_772630(&v757);
    LOBYTE(v872) = 0xA4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v477);
    v478 = v757;
    LOBYTE(v872) = 1;
    if ( v757 )
    {
      --v757[7].Unk08;
      if ( !v478[7].Unk08 )
        sub_772560(v478);
    }
    v479 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v470, 2u, v479);
    v480 = sub_772630(&v759);
    LOBYTE(v872) = 0xA5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v480);
    v481 = v759;
    LOBYTE(v872) = 1;
    if ( v759 )
    {
      --v759[7].Unk08;
      if ( !v481[7].Unk08 )
        sub_772560(v481);
    }
    v482 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v470, 3u, v482);
    v483 = sub_772630(&v761);
    LOBYTE(v872) = 0xA6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v483);
    v484 = v761;
    LOBYTE(v872) = 1;
    if ( v761 )
    {
      --v761[7].Unk08;
      if ( !v484[7].Unk08 )
        sub_772560(v484);
    }
    v485 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v470, 4u, v485);
    v486 = sub_772630(&v763);
    LOBYTE(v872) = 0xA7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v486);
    v487 = v763;
    LOBYTE(v872) = 1;
    if ( v763 )
    {
      --v763[7].Unk08;
      if ( !v487[7].Unk08 )
        sub_772560(v487);
    }
    v488 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v488, (NiRenderedTexture *)dword_B43110);
    sub_760010(v470, 5u, v488);
    v489 = sub_772630(&v765);
    LOBYTE(v872) = 0xA8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v489);
    v490 = v765;
    LOBYTE(v872) = 1;
    if ( v765 )
    {
      --v765[7].Unk08;
      if ( !v490[7].Unk08 )
        sub_772560(v490);
    }
    v491 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v470, 6u, v491);
    v492 = sub_772630(&v767);
    LOBYTE(v872) = 0xA9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v492);
    v493 = v767;
    LOBYTE(v872) = 1;
    if ( v767 )
    {
      --v767[7].Unk08;
      if ( !v493[7].Unk08 )
        sub_772560(v493);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v470, 7u, &v1->Stage);
  }
  sub_7AECB0(v470, (NiD3DVertexShader *)dword_B45384);
  sub_7AEC60(&v470->__vftable, (NiD3DPixelShader *)dword_B45170);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 0x1B, 0, 0);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 0xF, 0, 0);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 7, 1, 0);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 0x17, 4, 0);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 0xE, 1, 0);
  if ( !v470->RenderStateGroup )
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v470->RenderStateGroup, 0x34, 0, 0);
  dword_B43D98 = 0x59088;
  dword_B44428 = 0x19C;
  dword_B43708 = 0x18000;
  dword_B44AB8 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B4581C);
  v494 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v495 = sub_772630(&v769);
    LOBYTE(v872) = 0xAA;
    sub_75FAE0((NiD3DTextureStage **)&a3, v495);
    v496 = v769;
    LOBYTE(v872) = 1;
    if ( v769 )
    {
      --v769[7].Unk08;
      if ( !v496[7].Unk08 )
        sub_772560(v496);
    }
    v497 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v494, 0, v497);
    v498 = sub_772630(&v771);
    LOBYTE(v872) = 0xAB;
    sub_75FAE0((NiD3DTextureStage **)&a3, v498);
    v499 = v771;
    LOBYTE(v872) = 1;
    if ( v771 )
    {
      --v771[7].Unk08;
      if ( !v499[7].Unk08 )
        sub_772560(v499);
    }
    v500 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v494, 1u, v500);
    v501 = sub_772630(&v773);
    LOBYTE(v872) = 0xAC;
    sub_75FAE0((NiD3DTextureStage **)&a3, v501);
    v502 = v773;
    LOBYTE(v872) = 1;
    if ( v773 )
    {
      --v773[7].Unk08;
      if ( !v502[7].Unk08 )
        sub_772560(v502);
    }
    v503 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v494, 2u, v503);
    v504 = sub_772630(&v775);
    LOBYTE(v872) = 0xAD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v504);
    v505 = v775;
    LOBYTE(v872) = 1;
    if ( v775 )
    {
      --v775[7].Unk08;
      if ( !v505[7].Unk08 )
        sub_772560(v505);
    }
    v506 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v494, 3u, v506);
    v507 = sub_772630(&v777);
    LOBYTE(v872) = 0xAE;
    sub_75FAE0((NiD3DTextureStage **)&a3, v507);
    v508 = v777;
    LOBYTE(v872) = 1;
    if ( v777 )
    {
      --v777[7].Unk08;
      if ( !v508[7].Unk08 )
        sub_772560(v508);
    }
    v509 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v494, 4u, v509);
    v510 = sub_772630(&v779);
    LOBYTE(v872) = 0xAF;
    sub_75FAE0((NiD3DTextureStage **)&a3, v510);
    v511 = v779;
    LOBYTE(v872) = 1;
    if ( v779 )
    {
      --v779[7].Unk08;
      if ( !v511[7].Unk08 )
        sub_772560(v511);
    }
    v512 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v512, (NiRenderedTexture *)dword_B43110);
    sub_760010(v494, 5u, v512);
    v513 = sub_772630(&v781);
    LOBYTE(v872) = 0xB0;
    sub_75FAE0((NiD3DTextureStage **)&a3, v513);
    v514 = v781;
    LOBYTE(v872) = 1;
    if ( v781 )
    {
      --v781[7].Unk08;
      if ( !v514[7].Unk08 )
        sub_772560(v514);
    }
    v515 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v494, 6u, v515);
    v516 = sub_772630(&v783);
    LOBYTE(v872) = 0xB1;
    sub_75FAE0((NiD3DTextureStage **)&a3, v516);
    v517 = v783;
    LOBYTE(v872) = 1;
    if ( v783 )
    {
      --v783[7].Unk08;
      if ( !v517[7].Unk08 )
        sub_772560(v517);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v494, 7u, &v1->Stage);
  }
  sub_7AECB0(v494, (NiD3DVertexShader *)dword_B45388);
  sub_7AEC60(&v494->__vftable, (NiD3DPixelShader *)dword_B45174);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 0x1B, 0, 0);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 0xF, 0, 0);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 7, 1, 0);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 0x17, 4, 0);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 0xE, 1, 0);
  if ( !v494->RenderStateGroup )
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v494->RenderStateGroup, 0x34, 0, 0);
  dword_B43D9C = 0x190F2;
  dword_B4442C = 0x11C;
  dword_B4370C = 0x18060;
  dword_B44ABC = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B45820);
  v518 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v519 = sub_772630(&v785);
    LOBYTE(v872) = 0xB2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v519);
    v520 = v785;
    LOBYTE(v872) = 1;
    if ( v785 )
    {
      --v785[7].Unk08;
      if ( !v520[7].Unk08 )
        sub_772560(v520);
    }
    v521 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v518, 0, v521);
    v522 = sub_772630(&v787);
    LOBYTE(v872) = 0xB3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v522);
    v523 = v787;
    LOBYTE(v872) = 1;
    if ( v787 )
    {
      --v787[7].Unk08;
      if ( !v523[7].Unk08 )
        sub_772560(v523);
    }
    v524 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v518, 1u, v524);
    v525 = sub_772630(&v789);
    LOBYTE(v872) = 0xB4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v525);
    v526 = v789;
    LOBYTE(v872) = 1;
    if ( v789 )
    {
      --v789[7].Unk08;
      if ( !v526[7].Unk08 )
        sub_772560(v526);
    }
    v527 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v518, 2u, v527);
    v528 = sub_772630(&v791);
    LOBYTE(v872) = 0xB5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v528);
    v529 = v791;
    LOBYTE(v872) = 1;
    if ( v791 )
    {
      --v791[7].Unk08;
      if ( !v529[7].Unk08 )
        sub_772560(v529);
    }
    v530 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v518, 3u, v530);
    v531 = sub_772630(&v793);
    LOBYTE(v872) = 0xB6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v531);
    v532 = v793;
    LOBYTE(v872) = 1;
    if ( v793 )
    {
      --v793[7].Unk08;
      if ( !v532[7].Unk08 )
        sub_772560(v532);
    }
    v533 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v518, 4u, v533);
    v534 = sub_772630(&v795);
    LOBYTE(v872) = 0xB7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v534);
    v535 = v795;
    LOBYTE(v872) = 1;
    if ( v795 )
    {
      --v795[7].Unk08;
      if ( !v535[7].Unk08 )
        sub_772560(v535);
    }
    v536 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v536, (NiRenderedTexture *)dword_B43110);
    sub_760010(v518, 5u, v536);
    v537 = sub_772630(&v797);
    LOBYTE(v872) = 0xB8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v537);
    v538 = v797;
    LOBYTE(v872) = 1;
    if ( v797 )
    {
      --v797[7].Unk08;
      if ( !v538[7].Unk08 )
        sub_772560(v538);
    }
    v539 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v518, 6u, v539);
    v540 = sub_772630(&v799);
    LOBYTE(v872) = 0xB9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v540);
    v541 = v799;
    LOBYTE(v872) = 1;
    if ( v799 )
    {
      --v799[7].Unk08;
      if ( !v541[7].Unk08 )
        sub_772560(v541);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v518, 7u, &v1->Stage);
  }
  sub_7AECB0(v518, (NiD3DVertexShader *)dword_B45388);
  sub_7AEC60(&v518->__vftable, (NiD3DPixelShader *)dword_B45178);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 0x1B, 0, 0);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 0xF, 0, 0);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 7, 1, 0);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 0x17, 4, 0);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 0xE, 1, 0);
  if ( !v518->RenderStateGroup )
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v518->RenderStateGroup, 0x34, 0, 0);
  dword_B43DA0 = 0x190F2;
  dword_B44430 = 0x19C;
  dword_B43710 = 0x18060;
  dword_B44AC0 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B45830);
  v542 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v543 = sub_772630(&v801);
    LOBYTE(v872) = 0xBA;
    sub_75FAE0((NiD3DTextureStage **)&a3, v543);
    v544 = v801;
    LOBYTE(v872) = 1;
    if ( v801 )
    {
      --v801[7].Unk08;
      if ( !v544[7].Unk08 )
        sub_772560(v544);
    }
    v545 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v542, 0, v545);
    v546 = sub_772630(&v803);
    LOBYTE(v872) = 0xBB;
    sub_75FAE0((NiD3DTextureStage **)&a3, v546);
    v547 = v803;
    LOBYTE(v872) = 1;
    if ( v803 )
    {
      --v803[7].Unk08;
      if ( !v547[7].Unk08 )
        sub_772560(v547);
    }
    v548 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v542, 1u, v548);
    v549 = sub_772630(&v805);
    LOBYTE(v872) = 0xBC;
    sub_75FAE0((NiD3DTextureStage **)&a3, v549);
    v550 = v805;
    LOBYTE(v872) = 1;
    if ( v805 )
    {
      --v805[7].Unk08;
      if ( !v550[7].Unk08 )
        sub_772560(v550);
    }
    v551 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v542, 2u, v551);
    v552 = sub_772630(&v807);
    LOBYTE(v872) = 0xBD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v552);
    v553 = v807;
    LOBYTE(v872) = 1;
    if ( v807 )
    {
      --v807[7].Unk08;
      if ( !v553[7].Unk08 )
        sub_772560(v553);
    }
    v554 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v542, 3u, v554);
    v555 = sub_772630(&v809);
    LOBYTE(v872) = 0xBE;
    sub_75FAE0((NiD3DTextureStage **)&a3, v555);
    v556 = v809;
    LOBYTE(v872) = 1;
    if ( v809 )
    {
      --v809[7].Unk08;
      if ( !v556[7].Unk08 )
        sub_772560(v556);
    }
    v557 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v542, 4u, v557);
    v558 = sub_772630(&v811);
    LOBYTE(v872) = 0xBF;
    sub_75FAE0((NiD3DTextureStage **)&a3, v558);
    v559 = v811;
    LOBYTE(v872) = 1;
    if ( v811 )
    {
      --v811[7].Unk08;
      if ( !v559[7].Unk08 )
        sub_772560(v559);
    }
    v560 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v560, (NiRenderedTexture *)dword_B43110);
    sub_760010(v542, 5u, v560);
    v561 = sub_772630(&v813);
    LOBYTE(v872) = 0xC0;
    sub_75FAE0((NiD3DTextureStage **)&a3, v561);
    v562 = v813;
    LOBYTE(v872) = 1;
    if ( v813 )
    {
      --v813[7].Unk08;
      if ( !v562[7].Unk08 )
        sub_772560(v562);
    }
    v563 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v542, 6u, v563);
    v564 = sub_772630(&v815);
    LOBYTE(v872) = 0xC1;
    sub_75FAE0((NiD3DTextureStage **)&a3, v564);
    v565 = v815;
    LOBYTE(v872) = 1;
    if ( v815 )
    {
      --v815[7].Unk08;
      if ( !v565[7].Unk08 )
        sub_772560(v565);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v542, 7u, &v1->Stage);
  }
  sub_7AECB0(v542, (NiD3DVertexShader *)dword_B45388);
  sub_7AEC60(&v542->__vftable, (NiD3DPixelShader *)dword_B4517C);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 0x1B, 0, 0);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 0xF, 0, 0);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 7, 1, 0);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 0x17, 4, 0);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 0xE, 1, 0);
  if ( !v542->RenderStateGroup )
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v542->RenderStateGroup, 0x34, 0, 0);
  dword_B43DB0 = 0x190F2;
  dword_B44440 = 0x19C;
  dword_B43720 = 0x18060;
  dword_B44AD0 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B45834);
  v566 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v567 = sub_772630(&v817);
    LOBYTE(v872) = 0xC2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v567);
    v568 = v817;
    LOBYTE(v872) = 1;
    if ( v817 )
    {
      --v817[7].Unk08;
      if ( !v568[7].Unk08 )
        sub_772560(v568);
    }
    v569 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v566, 0, v569);
    v570 = sub_772630(&v819);
    LOBYTE(v872) = 0xC3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v570);
    v571 = v819;
    LOBYTE(v872) = 1;
    if ( v819 )
    {
      --v819[7].Unk08;
      if ( !v571[7].Unk08 )
        sub_772560(v571);
    }
    v572 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v566, 1u, v572);
    v573 = sub_772630(&v821);
    LOBYTE(v872) = 0xC4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v573);
    v574 = v821;
    LOBYTE(v872) = 1;
    if ( v821 )
    {
      --v821[7].Unk08;
      if ( !v574[7].Unk08 )
        sub_772560(v574);
    }
    v575 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v566, 2u, v575);
    v576 = sub_772630(&v823);
    LOBYTE(v872) = 0xC5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v576);
    v577 = v823;
    LOBYTE(v872) = 1;
    if ( v823 )
    {
      --v823[7].Unk08;
      if ( !v577[7].Unk08 )
        sub_772560(v577);
    }
    v578 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v566, 3u, v578);
    v579 = sub_772630(&v825);
    LOBYTE(v872) = 0xC6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v579);
    v580 = v825;
    LOBYTE(v872) = 1;
    if ( v825 )
    {
      --v825[7].Unk08;
      if ( !v580[7].Unk08 )
        sub_772560(v580);
    }
    v581 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v566, 4u, v581);
    v582 = sub_772630(&v827);
    LOBYTE(v872) = 0xC7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v582);
    v583 = v827;
    LOBYTE(v872) = 1;
    if ( v827 )
    {
      --v827[7].Unk08;
      if ( !v583[7].Unk08 )
        sub_772560(v583);
    }
    v584 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v584, (NiRenderedTexture *)dword_B43110);
    sub_760010(v566, 5u, v584);
    v585 = sub_772630(&v829);
    LOBYTE(v872) = 0xC8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v585);
    v586 = v829;
    LOBYTE(v872) = 1;
    if ( v829 )
    {
      --v829[7].Unk08;
      if ( !v586[7].Unk08 )
        sub_772560(v586);
    }
    v587 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v566, 6u, v587);
    v588 = sub_772630(&v831);
    LOBYTE(v872) = 0xC9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v588);
    v589 = v831;
    LOBYTE(v872) = 1;
    if ( v831 )
    {
      --v831[7].Unk08;
      if ( !v589[7].Unk08 )
        sub_772560(v589);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v566, 7u, &v1->Stage);
  }
  sub_7AECB0(v566, (NiD3DVertexShader *)dword_B4538C);
  sub_7AEC60(&v566->__vftable, (NiD3DPixelShader *)dword_B45174);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 0x1B, 0, 0);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 0xF, 0, 0);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 7, 1, 0);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 0x17, 4, 0);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 0xE, 1, 0);
  if ( !v566->RenderStateGroup )
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v566->RenderStateGroup, 0x34, 0, 0);
  dword_B43DB4 = 0x590F8;
  dword_B44444 = 0x11C;
  dword_B43724 = 0x18060;
  dword_B44AD4 = 8;
  sub_76C890((NiD3DPass **)&v651, &dword_B45838);
  v590 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v591 = sub_772630(&v833);
    LOBYTE(v872) = 0xCA;
    sub_75FAE0((NiD3DTextureStage **)&a3, v591);
    v592 = v833;
    LOBYTE(v872) = 1;
    if ( v833 )
    {
      --v833[7].Unk08;
      if ( !v592[7].Unk08 )
        sub_772560(v592);
    }
    v593 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v590, 0, v593);
    v594 = sub_772630(&v835);
    LOBYTE(v872) = 0xCB;
    sub_75FAE0((NiD3DTextureStage **)&a3, v594);
    v595 = v835;
    LOBYTE(v872) = 1;
    if ( v835 )
    {
      --v835[7].Unk08;
      if ( !v595[7].Unk08 )
        sub_772560(v595);
    }
    v596 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v590, 1u, v596);
    v597 = sub_772630(&v837);
    LOBYTE(v872) = 0xCC;
    sub_75FAE0((NiD3DTextureStage **)&a3, v597);
    v598 = v837;
    LOBYTE(v872) = 1;
    if ( v837 )
    {
      --v837[7].Unk08;
      if ( !v598[7].Unk08 )
        sub_772560(v598);
    }
    v599 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v590, 2u, v599);
    v600 = sub_772630(&v839);
    LOBYTE(v872) = 0xCD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v600);
    v601 = v839;
    LOBYTE(v872) = 1;
    if ( v839 )
    {
      --v839[7].Unk08;
      if ( !v601[7].Unk08 )
        sub_772560(v601);
    }
    v602 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v590, 3u, v602);
    v603 = sub_772630(&v841);
    LOBYTE(v872) = 0xCE;
    sub_75FAE0((NiD3DTextureStage **)&a3, v603);
    v604 = v841;
    LOBYTE(v872) = 1;
    if ( v841 )
    {
      --v841[7].Unk08;
      if ( !v604[7].Unk08 )
        sub_772560(v604);
    }
    v605 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v590, 4u, v605);
    v606 = sub_772630(&v843);
    LOBYTE(v872) = 0xCF;
    sub_75FAE0((NiD3DTextureStage **)&a3, v606);
    v607 = v843;
    LOBYTE(v872) = 1;
    if ( v843 )
    {
      --v843[7].Unk08;
      if ( !v607[7].Unk08 )
        sub_772560(v607);
    }
    v608 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v608, (NiRenderedTexture *)dword_B43110);
    sub_760010(v590, 5u, v608);
    v609 = sub_772630(&v845);
    LOBYTE(v872) = 0xD0;
    sub_75FAE0((NiD3DTextureStage **)&a3, v609);
    v610 = v845;
    LOBYTE(v872) = 1;
    if ( v845 )
    {
      --v845[7].Unk08;
      if ( !v610[7].Unk08 )
        sub_772560(v610);
    }
    v611 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v590, 6u, v611);
    v612 = sub_772630(&v847);
    LOBYTE(v872) = 0xD1;
    sub_75FAE0((NiD3DTextureStage **)&a3, v612);
    v613 = v847;
    LOBYTE(v872) = 1;
    if ( v847 )
    {
      --v847[7].Unk08;
      if ( !v613[7].Unk08 )
        sub_772560(v613);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v590, 7u, &v1->Stage);
  }
  sub_7AECB0(v590, (NiD3DVertexShader *)dword_B4538C);
  sub_7AEC60(&v590->__vftable, (NiD3DPixelShader *)dword_B45178);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 0x1B, 0, 0);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 0xF, 0, 0);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 7, 1, 0);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 0x17, 4, 0);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 0xE, 1, 0);
  if ( !v590->RenderStateGroup )
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v590->RenderStateGroup, 0x34, 0, 0);
  dword_B43DB8 = 0x590F8;
  dword_B44448 = 0x19C;
  dword_B43728 = 0x18060;
  dword_B44AD8 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B45838);
  v614 = (NiD3DPass *)v651;
  if ( (unsigned int)v651[6] < 8 )
  {
    v615 = sub_772630(&v849);
    LOBYTE(v872) = 0xD2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v615);
    v616 = v849;
    LOBYTE(v872) = 1;
    if ( v849 )
    {
      --v849[7].Unk08;
      if ( !v616[7].Unk08 )
        sub_772560(v616);
    }
    v617 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v614, 0, v617);
    v618 = sub_772630(&v851);
    LOBYTE(v872) = 0xD3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v618);
    v619 = v851;
    LOBYTE(v872) = 1;
    if ( v851 )
    {
      --v851[7].Unk08;
      if ( !v619[7].Unk08 )
        sub_772560(v619);
    }
    v620 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v614, 1u, v620);
    v621 = sub_772630(&v853);
    LOBYTE(v872) = 0xD4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v621);
    v622 = v853;
    LOBYTE(v872) = 1;
    if ( v853 )
    {
      --v853[7].Unk08;
      if ( !v622[7].Unk08 )
        sub_772560(v622);
    }
    v623 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v614, 2u, v623);
    v624 = sub_772630(&v855);
    LOBYTE(v872) = 0xD5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v624);
    v625 = v855;
    LOBYTE(v872) = 1;
    if ( v855 )
    {
      --v855[7].Unk08;
      if ( !v625[7].Unk08 )
        sub_772560(v625);
    }
    v626 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v614, 3u, v626);
    v627 = sub_772630(&v857);
    LOBYTE(v872) = 0xD6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v627);
    v628 = v857;
    LOBYTE(v872) = 1;
    if ( v857 )
    {
      --v857[7].Unk08;
      if ( !v628[7].Unk08 )
        sub_772560(v628);
    }
    v629 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v614, 4u, v629);
    v630 = sub_772630(&v859);
    LOBYTE(v872) = 0xD7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v630);
    v631 = v859;
    LOBYTE(v872) = 1;
    if ( v859 )
    {
      --v859[7].Unk08;
      if ( !v631[7].Unk08 )
        sub_772560(v631);
    }
    v632 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v632, (NiRenderedTexture *)dword_B43110);
    sub_760010(v614, 5u, v632);
    v633 = sub_772630(&v861);
    LOBYTE(v872) = 0xD8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v633);
    v634 = v861;
    LOBYTE(v872) = 1;
    if ( v861 )
    {
      --v861[7].Unk08;
      if ( !v634[7].Unk08 )
        sub_772560(v634);
    }
    v635 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v614, 6u, v635);
    v636 = sub_772630(&v863);
    LOBYTE(v872) = 0xD9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v636);
    v637 = v863;
    LOBYTE(v872) = 1;
    if ( v863 )
    {
      --v863[7].Unk08;
      if ( !v637[7].Unk08 )
        sub_772560(v637);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v614, 7u, &v1->Stage);
  }
  sub_7AECB0(v614, (NiD3DVertexShader *)dword_B4538C);
  sub_7AEC60(&v614->__vftable, (NiD3DPixelShader *)dword_B45178);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 0x1B, 0, 0);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 0xF, 0, 0);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 7, 1, 0);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 0x17, 4, 0);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 0xE, 1, 0);
  if ( !v614->RenderStateGroup )
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v614->RenderStateGroup, 0x34, 0, 0);
  dword_B43DB8 = 0x590F8;
  dword_B44448 = 0x19C;
  dword_B43728 = 0x18060;
  dword_B44AD8 = 0xC;
  sub_76C890((NiD3DPass **)&v651, &dword_B455B8);
  v638 = (NiD3DPass *)v651;
  if ( !v651[6] )
  {
    v639 = sub_772630(&v865);
    LOBYTE(v872) = 0xDA;
    sub_75FAE0((NiD3DTextureStage **)&a3, v639);
    v640 = v865;
    LOBYTE(v872) = 1;
    if ( v865 )
    {
      --v865[7].Unk08;
      if ( !v640[7].Unk08 )
        sub_772560(v640);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v638, v638->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v638, (NiD3DVertexShader *)dword_B45434);
  sub_7AEC60(&v638->__vftable, (NiD3DPixelShader *)dword_B4522C);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 0x1B, 0, 0);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 0xF, 0, 0);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 7, 1, 0);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 0x17, 4, 0);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 0xE, 1, 0);
  if ( !v638->RenderStateGroup )
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v638->RenderStateGroup, 0x34, 0, 0);
  dword_B43B38 = 0x400802;
  dword_B441C8 = 0;
  sub_76C890((NiD3DPass **)&v651, &dword_B455BC);
  v641 = (NiD3DPass *)v651;
  if ( !v651[6] )
  {
    v642 = sub_772630(&v867);
    LOBYTE(v872) = 0xDB;
    sub_75FAE0((NiD3DTextureStage **)&a3, v642);
    v643 = v867;
    LOBYTE(v872) = 1;
    if ( v867 )
    {
      --v867[7].Unk08;
      if ( !v643[7].Unk08 )
        sub_772560(v643);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v641, v641->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v641, (NiD3DVertexShader *)dword_B45438);
  sub_7AEC60(&v641->__vftable, (NiD3DPixelShader *)dword_B45230);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 0x1B, 0, 0);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 0xF, 1, 0);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 7, 1, 0);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 0x17, 4, 0);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 0xE, 1, 0);
  if ( !v641->RenderStateGroup )
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v641->RenderStateGroup, 0x34, 0, 0);
  dword_B43B3C = 0x400802;
  dword_B441CC = 0;
  sub_76C890((NiD3DPass **)&v651, &dword_B455C0);
  v644 = (NiD3DPass *)v651;
  if ( !v651[6] )
  {
    v645 = sub_772630(&v869);
    LOBYTE(v872) = 0xDC;
    sub_75FAE0((NiD3DTextureStage **)&a3, v645);
    v646 = v869;
    LOBYTE(v872) = 1;
    if ( v869 )
    {
      --v869[7].Unk08;
      if ( !v646[7].Unk08 )
        sub_772560(v646);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v644, v644->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v644, (NiD3DVertexShader *)dword_B4543C);
  sub_7AEC60(&v644->__vftable, (NiD3DPixelShader *)dword_B45234);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 0x1B, 0, 0);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 0xF, 0, 0);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 7, 1, 0);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 0x17, 4, 0);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 0xE, 1, 0);
  if ( !v644->RenderStateGroup )
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v644->RenderStateGroup, 0x34, 0, 0);
  dword_B43B40 = (int)&loc_840807 + 1;
  dword_B441D0 = 0;
  sub_76C890((NiD3DPass **)&v651, &dword_B455C4);
  v647 = (NiD3DPass *)v651;
  if ( !v651[6] )
  {
    v648 = sub_772630(&v871);
    LOBYTE(v872) = 0xDD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v648);
    v649 = v871;
    LOBYTE(v872) = 1;
    if ( v871 )
    {
      --v871[7].Unk08;
      if ( !v649[7].Unk08 )
        sub_772560(v649);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v647, v647->CurrentStage, &v1->Stage);
  }
  sub_7AECB0(v647, (NiD3DVertexShader *)dword_B45440);
  sub_7AEC60(&v647->__vftable, (NiD3DPixelShader *)dword_B45238);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 0x1B, 0, 0);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 0xF, 1, 0);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 7, 1, 0);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 0x17, 4, 0);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 0xE, 1, 0);
  if ( !v647->RenderStateGroup )
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v647->RenderStateGroup, 0x34, 0, 0);
  dword_B43B44 = (int)&loc_840807 + 1;
  dword_B441D4 = 0;
  LOBYTE(v872) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v647->RefCount-- == 1;
  v872 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v647);
}
