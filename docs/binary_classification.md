# Бинарна класификација

Бинарна класификација представља задатак надгледаног машинског учења. Користи
се за предвиђање којој од две класе (категорије) припада инстанца података.
Улаз за класификациони алгоритам је **скуп обележених примера**, где је свака
ознака цео број `0` или `1`. Излаз алгоритма бинарне класификације је
**класификатор**, који можеш користити за предвиђање класе нових необележених
инстанци података.

Примери сценарија бинарне класификације укључују:

- Разумевање осећаја (енгл. *sentiment*) коментара корисника, односно
означавање „позитивних“ или „негативних“ коментара корисника.
- Дијагностиковање да ли пацијент има или нема одређену болест.
- Доношење одлуке да се имејл означи или не означи као SPAM.
- Одређивање да ли фотографија садржи или не садржи одређени објекат - на
пример, да ли се на фотографији налази пас или се не налази пас.

## Улаз/излаз

За најбоље резултате решавања задатка бинарном класификацијом, подаци за
тренинг модела треба да буду избалансирани, тј. треба да буде једнак број
позитивно и негативно означених података. Ако подаци за тренинг нису
избалансирани, недостајуће податке требаш обрадити пре тренинга.

Подаци колоне улазне ознаке морају бити типа `Boolean`. Подаци колоне улазних
одлика морају бити вектор фиксне величине или `Single`.

На излазу добијају се следеће колоне:

| Име              | Тип     | Опис                                                                                                                          |
|------------------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| `Score`          | Single  | Необрађени резултат који је израчунао модел.                                                                                  |
| `PredictedLabel` | Boolean | Предвиђена ознака, на основу предзнака резултата. Негативан резултат се пресликава на нетачан, а позитиван резултат на тачан. |

## Тренери

Модел бинарне класификације можеш тренирати једним од следећих алгоритама:

- [AveragedPerceptronTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.averagedperceptrontrainer)
- [SdcaLogisticRegressionBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.sdcalogisticregressionbinarytrainer)
- [SdcaNonCalibratedBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.sdcanoncalibratedbinarytrainer)
- [SymbolicSgdLogisticRegressionBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.symbolicsgdlogisticregressionbinarytrainer)
- [LbfgsLogisticRegressionBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.lbfgslogisticregressionbinarytrainer)
- [LightGbmBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.lightgbm.lightgbmbinarytrainer)
- [FastTreeBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.fasttree.fasttreebinarytrainer)
- [FastForestBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.fasttree.fastforestbinarytrainer)
- [GamBinaryTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.fasttree.gambinarytrainer)
- [FieldAwareFactorizationMachineTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.fieldawarefactorizationmachinetrainer)
- [PriorTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.priortrainer)
- [LinearSvmTrainer](https://learn.microsoft.com/en-us/dotnet/api/microsoft.ml.trainers.linearsvmtrainer)
