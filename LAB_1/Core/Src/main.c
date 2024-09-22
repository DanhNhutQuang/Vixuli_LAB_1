/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
int16_t t;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  void display7SEG (int num){
       	 switch (num){
       	 case 0:
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 1:
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 2:
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 3:
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 4:
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);

       		 break;
       	 case 5:
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 6:
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 7:
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, GPIO_PIN_RESET);
       	     break;
       	 case 8:
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 break;
       	 case 9:
       		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_0_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, GPIO_PIN_RESET);
       		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, GPIO_PIN_SET);
       		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, GPIO_PIN_RESET);
       		 break;

       	 default:
       		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
       		 break;

       	 }
        }
   // Hàm điều khiển LED 7 đoạn thứ hai
   void display7SEG_2 (int num) {
       switch (num) {
           case 0:
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               break;
           case 1:
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               break;
           case 2:
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               break;
           case 3:
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               break;
           case 4:
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               break;
           case 5:
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               break;
           case 6:
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
               break;
           case 7:
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, GPIO_PIN_RESET);
               break;
           case 8:
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               break;
           case 9:
               HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_7_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
               HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
               HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
               break;
           default:
               HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
               break;
       }
   }
   int stage1 = 0, stage2 = 0; // Biến để theo dõi giai đoạn của cả hai LED
     unsigned int counter1 = 9, counter2 = 7; // Biến đếm cho từng LED

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

	  // Đếm cho LED 7 đoạn đầu tiên (counter1)
	  	      if (counter1 == 0) {
	  	          if (stage1 == 0) {
	  	              stage1 = 1;
	  	              counter1 = 7;
	  	          }
	  	          if (stage1 == 1) {
	  	              stage1 = 2;
	  	              counter1 = 2;
	  	          }
	  	          else if (stage1 == 2) {
	  	              stage1 = 0;
	  	              counter1 = 9;
	  	          }
	  	      }
	  	      display7SEG(counter1--); // Hiển thị số cho LED 7 đoạn đầu tiên

	  	      // Đếm cho LED 7 đoạn thứ hai (counter2)
	  	      if (counter2 == 0) {
	  	          if (stage2 == 0) {
	  	              stage2 = 1;
	  	              counter2 = 2;
	  	          }
	  	          else if (stage2 == 1) {
	  	              stage2 = 2;
	  	              counter2 = 9;
	  	          }
	  	          else if (stage2 == 2) {
	  	              stage2 = 0;
	  	              counter2 = 7;
	  	          }
	  	      }
	  	      display7SEG_2(counter2--);

	  	      if(t>=0 && t<7){
	  	      	HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_SET);
	  	      	HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_RESET);
	  	      	HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_RESET);
	  	      	HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_RESET);
	  	      	HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_RESET);
	  	      	HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
	  	      }

	  	      if(t>=7 && t<9){
	  	          	HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_RESET);
	  	          	HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_SET);
	  	          	HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_RESET);
	  	          	HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_RESET);
	  	          	HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_RESET);
	  	          	HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_SET);
	  	      }
	  	      if(t>=9 && t<16){
	  	              	HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
	  	              	HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_SET);
	  	              	HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_RESET);
	  	      }
	  	      if(t>=16 && t<18){
	  	              	HAL_GPIO_WritePin(Gre_1_GPIO_Port, Gre_1_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Yel_1_GPIO_Port, Yel_1_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Red_1_GPIO_Port, Red_1_Pin, GPIO_PIN_SET);
	  	              	HAL_GPIO_WritePin(Gre_2_GPIO_Port, Gre_2_Pin, GPIO_PIN_RESET);
	  	              	HAL_GPIO_WritePin(Yel_2_GPIO_Port, Yel_2_Pin, GPIO_PIN_SET);
	  	              	HAL_GPIO_WritePin(Red_2_GPIO_Port, Red_2_Pin, GPIO_PIN_RESET);

	  	        }

	  	      HAL_Delay(1000);
	  	      t=t+1;
	  	      if(t>=18) t=0;


    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin
                          |SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_0_Pin
                          |SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin
                          |SEG_5_Pin|SEG_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Gre_1_Pin|Yel_1_Pin|Red_1_Pin|Gre_2_Pin
                          |Yel_2_Pin|Red_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG_7_Pin SEG_8_Pin SEG_9_Pin SEG_10_Pin
                           SEG_11_Pin SEG_12_Pin SEG_13_Pin SEG_0_Pin
                           SEG_1_Pin SEG_2_Pin SEG_3_Pin SEG_4_Pin
                           SEG_5_Pin SEG_6_Pin */
  GPIO_InitStruct.Pin = SEG_7_Pin|SEG_8_Pin|SEG_9_Pin|SEG_10_Pin
                          |SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_0_Pin
                          |SEG_1_Pin|SEG_2_Pin|SEG_3_Pin|SEG_4_Pin
                          |SEG_5_Pin|SEG_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : Gre_1_Pin Yel_1_Pin Red_1_Pin Gre_2_Pin
                           Yel_2_Pin Red_2_Pin */
  GPIO_InitStruct.Pin = Gre_1_Pin|Yel_1_Pin|Red_1_Pin|Gre_2_Pin
                          |Yel_2_Pin|Red_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
