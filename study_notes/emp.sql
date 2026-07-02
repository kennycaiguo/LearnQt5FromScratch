/*
 Navicat Premium Dump SQL

 Source Server         : sqlserver
 Source Server Type    : SQL Server
 Source Server Version : 17001000 (17.00.1000)
 Source Host           : DESKTOP-GQEQ2P1:1433
 Source Catalog        : company
 Source Schema         : dbo

 Target Server Type    : SQL Server
 Target Server Version : 17001000 (17.00.1000)
 File Encoding         : 65001

 Date: 30/06/2026 19:43:40
*/


-- ----------------------------
-- Table structure for emp
-- ----------------------------
IF EXISTS (SELECT * FROM sys.all_objects WHERE object_id = OBJECT_ID(N'[dbo].[emp]') AND type IN ('U'))
	DROP TABLE [dbo].[emp]
GO

CREATE TABLE [dbo].[emp] (
  [id] int  NOT NULL,
  [name] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [age] int  NOT NULL,
  [gender] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [phone] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [email] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [depId] int  NOT NULL
)
GO

ALTER TABLE [dbo].[emp] SET (LOCK_ESCALATION = TABLE)
GO


-- ----------------------------
-- Records of emp
-- ----------------------------
INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'1', N'Jack', N'25', N'male', N'1234567', N'jack1234@gmail.com', N'1')
GO

INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'2', N'Mary', N'26', N'female', N'2345678', N'mary1234@gmail.com', N'1')
GO

INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'3', N'Ben', N'24', N'male', N'1234678', N'ben12345@gmail.com', N'2')
GO


-- ----------------------------
-- Primary Key structure for table emp
-- ----------------------------
ALTER TABLE [dbo].[emp] ADD CONSTRAINT [PK__emp__3213E83FBDC8434D] PRIMARY KEY CLUSTERED ([id])
WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON)  
ON [PRIMARY]
GO

